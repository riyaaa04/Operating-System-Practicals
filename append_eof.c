#include <stdio.h>
#include <stdlib.h>

int main() {
    const char *filename = "example.txt";
    FILE *file = fopen(filename, "a");

    if (file == NULL) {
        perror("fopen");
        return EXIT_FAILURE;
    }

    const char *text = "End of File";
    if (fprintf(file, "%s\n", text) < 0) {
        perror("fprintf");
        fclose(file);
        return EXIT_FAILURE;
    }

    printf("Successfully appended to the file '%s'\n", filename);
    
    fclose(file);
    return EXIT_SUCCESS;
}

