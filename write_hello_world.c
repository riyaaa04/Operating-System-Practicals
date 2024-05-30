#include <stdio.h>
#include <stdlib.h>

int main() {
    const char *filename = "hello.txt";
    FILE *file = fopen(filename, "w");

    if (file == NULL) {
        perror("fopen");
        return EXIT_FAILURE;
    }

    const char *text = "Hello, World!";
    if (fprintf(file, "%s\n", text) < 0) {
        perror("fprintf");
        fclose(file);
        return EXIT_FAILURE;
    }

    printf("Successfully wrote to the file '%s'\n", filename);
    
    fclose(file);
    return EXIT_SUCCESS;
}

