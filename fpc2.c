#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    // Change the owner of a file (e.g., "example.txt") to user with UID 1000 and group with GID 1000
    if (chown("example.txt", 1000, 1000) == -1) {
        perror("chown");
        exit(EXIT_FAILURE);
    }

    printf("Owner of the file changed successfully\n");

    return 0;
}

