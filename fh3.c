#include <stdio.h>
#include <stdlib.h>

int main() {
    // Open the file in binary read mode
    FILE *file = fopen("fhexample.txt", "rb");
    if (file == NULL) {
        perror("fopen");
        return EXIT_FAILURE;
    }

    // Move the file pointer to 10 bytes before the end of the file
    if (fseek(file, -10, SEEK_END) != 0) {
        perror("fseek");
        fclose(file);
        return EXIT_FAILURE;
    }

    // Read the last 10 bytes
    char buffer[11]; // 10 bytes + 1 for the null terminator
    size_t bytesRead = fread(buffer, 1, 10, file);
    if (bytesRead < 10) {
        if (feof(file)) {
            fprintf(stderr, "Reached end of file unexpectedly.\n");
        } else {
            perror("fread");
        }
        fclose(file);
        return EXIT_FAILURE;
    }

    // Null-terminate the buffer to make it a valid string
    buffer[10] = '\0';

    // Print the last 10 bytes
    printf("Last 10 bytes: %s\n", buffer);

    // Close the file
    fclose(file);

    return EXIT_SUCCESS;
}


