#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid;

    // Fork a child process
    pid = fork();

    if (pid == -1) { // Fork failed
        perror("fork");
        exit(EXIT_FAILURE);
    } else if (pid == 0) { // Child process
        // Replace the child process with a different program
        char *args[] = {"/bin/ls", "-l", "/", NULL}; // Example: running ls -l /
        execv(args[0], args);

        // If execv returns, it means an error occurred
        perror("execv");
        exit(EXIT_FAILURE);
    } else { // Parent process
        // Wait for the child process to finish
        wait(NULL);
    }

    return 0;
}

