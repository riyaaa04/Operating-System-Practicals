#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <pthread.h>

#define PORT 12345
#define BUFFER_SIZE 1024

void *handle_client(void *client_socket) {
    int sock = *((int *)client_socket);
    free(client_socket);
    char buffer[BUFFER_SIZE];
    int n;

    while ((n = read(sock, buffer, BUFFER_SIZE - 1)) > 0) {
        buffer[n] = '\0';
        if (strcmp(buffer, "exit") == 0) {
            break;
        }

        int number = atoi(buffer);
        char *response = (number % 2 == 0) ? "even" : "odd";
        write(sock, response, strlen(response));
    }

    close(sock);
    printf("Client disconnected.\n");
    return NULL;
}

int main() {
    int server_fd, new_socket;
    struct sockaddr_in address;
    int addrlen = sizeof(address);

    if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == 0) {
        perror("Socket creation failed");
        exit(EXIT_FAILURE);
    }

    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(PORT);

    if (bind(server_fd, (struct sockaddr *)&address, sizeof(address)) < 0) {
        perror("Bind failed");
        close(server_fd);
        exit(EXIT_FAILURE);
    }

    if (listen(server_fd, 3) < 0) {
        perror("Listen");
        close(server_fd);
        exit(EXIT_FAILURE);
    }

    printf("Server listening on port %d\n", PORT);

    while (1) {
        if ((new_socket = accept(server_fd, (struct sockaddr *)&address, (socklen_t*)&addrlen)) < 0) {
            perror("Accept");
            close(server_fd);
            exit(EXIT_FAILURE);
        }

        printf("New connection accepted.\n");

        int *client_socket = malloc(sizeof(int));
        *client_socket = new_socket;
        pthread_t thread_id;
        pthread_create(&thread_id, NULL, handle_client, (void *)client_socket);
        pthread_detach(thread_id);
    }

    close(server_fd);
    return 0;
}

