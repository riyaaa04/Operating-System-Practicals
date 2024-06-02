#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <dirent.h>

#define PORT 12345
#define BUFFER_SIZE 1024

void list_files(int client_socket) {
    DIR *d;
    struct dirent *dir;
    char buffer[BUFFER_SIZE];
    
    d = opendir(".");
    if (d) {
        while ((dir = readdir(d)) != NULL) {
            if (dir->d_type == DT_REG) { // Only list regular files
                snprintf(buffer, sizeof(buffer), "%s\n", dir->d_name);
                send(client_socket, buffer, strlen(buffer), 0);
            }
        }
        closedir(d);
    }
    // Send a termination message to indicate the end of the list
    snprintf(buffer, sizeof(buffer), "END_OF_LIST\n");
    send(client_socket, buffer, strlen(buffer), 0);
}

void send_file(int client_socket, const char *filename) {
    char buffer[BUFFER_SIZE];
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        return;
    }

    while (fgets(buffer, BUFFER_SIZE, file) != NULL) {
        send(client_socket, buffer, strlen(buffer), 0);
    }

    fclose(file);
}

void handle_client(int client_socket) {
    char buffer[BUFFER_SIZE];
    int n;

    // Send the list of files to the client
    list_files(client_socket);

    // Read the file name requested by the client
    n = read(client_socket, buffer, BUFFER_SIZE - 1);
    if (n < 0) {
        perror("Error reading from socket");
        close(client_socket);
        return;
    }
    buffer[n] = '\0';

    // Send the requested file to the client
    send_file(client_socket, buffer);

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

