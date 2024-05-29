#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

// Signal handler function for SIGINT
void sigint_handler(int signum) {
    printf("Received SIGINT signal (Ctrl+C)\n");
}

int main() {
    // Register the signal handler for SIGINT
    if (signal(SIGINT, sigint_handler) == SIG_ERR) {
        perror("signal");
        exit(EXIT_FAILURE);
    }

    printf("Press Ctrl+C to send SIGINT signal\n");

    // Keep the program running until interrupted by SIGINT
    while (1) {
        // Do nothing
    }

    return 0;
}

