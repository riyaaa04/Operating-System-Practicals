#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

int main() {
    // Set the permissions of a file (e.g., "example.txt") to read and write for owner, group, and others
    if (chmod("example.txt", S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH | S_IWOTH) == -1) {
        perror("chmod");
        exit(EXIT_FAILURE);
    }

    printf("File permissions changed successfully\n");

    return 0;
}

