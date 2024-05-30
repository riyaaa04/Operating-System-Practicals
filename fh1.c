#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file = fopen("file3.txt", "rb");
    if (!file) {
        perror("fopen");
        exit(EXIT_FAILURE);
    }

    char buffer[11] = {0}; // 10 bytes + 1 for null terminator
    fread(buffer, 1, 10, file);
    fclose(file);

    printf("First 10 bytes: %s\n", buffer);

    return 0;
}

