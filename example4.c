#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

// Signal handler function
void sigint_handler(int signum) {
    printf("Received SIGINT signal (Ctrl+C)\n");
}

int main() {
    // Register signal handler for SIGINT (Ctrl+C)
    if (signal(SIGINT, sigint_handler) == SIG_ERR) {
        fprintf(stderr, "Failed to register signal handler\n");
        return 1;
    }

    printf("Signal handling is active. Press Ctrl+C to send SIGINT signal\n");

    // Infinite loop to keep the program running
    while (1) {
        sleep(1);
    }

    return 0;
}

