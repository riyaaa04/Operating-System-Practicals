#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#define PORT 12345
#define BUFFER_SIZE 1024

void handle_client(int client_socket) {
    char filename[BUFFER_SIZE];
    char buffer[BUFFER_SIZE];
    int n;

    // Read the file name from the client
    n = read(client_socket, filename, BUFFER_SIZE - 1);
    if (n < 0) {
        perror("Error reading from socket");
        close(client_socket);
        return;
    }
    filename[n] = '\0';
    
    // Open the file and send its contents to the client
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        close(client_socket);
        return;
    }

    while (fgets(buffer, BUFFER_SIZE, file) != NULL) {
        write(client_socket, buffer, strlen(buffer));
    }

    fclose(file);
    close(client_socket);
    printf("Client disconnected.\n");
}

int main() {
    int server_fd, client_socket;
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
        if ((client_socket = accept(server_fd, (struct sockaddr *)&address, (socklen_t*)&addrlen)) < 0) {
            perror("Accept");
            close(server_fd);
            exit(EXIT_FAILURE);
        }

        printf("New connection accepted.\n");
        handle_client(client_socket);
    }

    close(server_fd);
    return 0;
}

