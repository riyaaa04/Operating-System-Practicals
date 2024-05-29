#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h> // Include string.h for strlen

#define BUFFER_SIZE 1024

int main() {
    int pipefd[2];
    char buffer[BUFFER_SIZE];
    pid_t pid;

    // Create a pipe
    if (pipe(pipefd) == -1) {
        perror("pipe");
        exit(EXIT_FAILURE);
    }

    // Fork a child process
    pid = fork();

    if (pid == -1) {
        perror("fork");
        exit(EXIT_FAILURE);
    } else if (pid == 0) { // Child process
        // Close the write end of the pipe
        close(pipefd[1]);

        // Read from the pipe
        ssize_t num_bytes = read(pipefd[0], buffer, BUFFER_SIZE);
        if (num_bytes == -1) {
            perror("read");
            exit(EXIT_FAILURE);
        }

        // Null-terminate the received data
        buffer[num_bytes] = '\0';

        printf("Child process received message from parent: %s\n", buffer);

        // Close the read end of the pipe
        close(pipefd[0]);

        exit(EXIT_SUCCESS);
    } else { // Parent process
        // Close the read end of the pipe
        close(pipefd[0]);

        // Write to the pipe
        const char* message = "Hello from parent!";
        ssize_t num_bytes = write(pipefd[1], message, strlen(message));
        if (num_bytes == -1) {
            perror("write");
            exit(EXIT_FAILURE);
        }

        printf("Parent process sent message to child: %s\n", message);

        // Close the write end of the pipe
        close(pipefd[1]);

        // Wait for the child process to exit
        wait(NULL);

        exit(EXIT_SUCCESS);
    }

    return 0;
}

