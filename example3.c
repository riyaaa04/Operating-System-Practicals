#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
    pid_t pid;
    int status;

    // Create a new process
    pid = fork();

    if (pid < 0) { // Fork failed
        fprintf(stderr, "Fork failed\n");
        return 1;
    } else if (pid == 0) { // Child process
        printf("Child process is running (PID: %d)\n", getpid());
        sleep(2); // Simulate some work in the child process
        printf("Child process is done\n");
        exit(0); // Terminate the child process
    } else { // Parent process
        printf("Parent process is waiting for the child process (PID: %d)\n", getpid());
        wait(&status); // Wait for the child process to finish
        printf("Parent process is done waiting\n");
    }

    return 0;
}

