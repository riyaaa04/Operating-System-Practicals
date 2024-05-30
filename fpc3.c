#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

int main() {
    struct stat st;

    // Get file status of a file (e.g., "example.txt")
    if (stat("example.txt", &st) == -1) {
        perror("stat");
        exit(EXIT_FAILURE);
    }

    printf("File size: %lld bytes\n", (long long)st.st_size);
    printf("File permissions: %o\n", st.st_mode & 0777);

    return 0;
}

