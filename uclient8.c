#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#define PORT 12345
#define BUFFER_SIZE 1024

int main() {
    int sock = 0;
    struct sockaddr_in serv_addr;
    char buffer[BUFFER_SIZE];
    char filename[BUFFER_SIZE];

    if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
        printf("Socket creation error\n");
        return -1;
    }

    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(PORT);

    if (inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr) <= 0) {
        printf("Invalid address/ Address not supported\n");
        return -1;
    }

    if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0) {
        printf("Connection Failed\n");
        return -1;
    }

    printf("Connected to the server.\n");

    // Receive the list of files from the server
    printf("Available files:\n");
    while (1) {
        int valread = read(sock, buffer, BUFFER_SIZE - 1);
        buffer[valread] = '\0';
        if (strcmp(buffer, "END_OF_LIST\n") == 0) {
            break;
        }
        printf("%s", buffer);
    }

    // Request a file from the list
    printf("Enter the file name you want to download: ");
    fgets(filename, BUFFER_SIZE, stdin);
    filename[strcspn(filename, "\n")] = '\0'; // Remove newline character

    send(sock, filename, strlen(filename), 0);

    // Receive the file contents from the server
    printf("File contents:\n");
    int valread;
    while ((valread = read(sock, buffer, BUFFER_SIZE - 1)) > 0) {
        buffer[valread] = '\0';
        printf("%s", buffer);
    }

    printf("\nFile transfer complete.\n");

    close(sock);
    return 0;
}

