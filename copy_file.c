#include <stdio.h>
#include <stdlib.h>

int main() {
    const char *source_filename = "source.txt";
    const char *destination_filename = "destination.txt";

    FILE *source_file = fopen(source_filename, "r");
    FILE *destination_file = fopen(destination_filename, "w");

    if (source_file == NULL || destination_file == NULL) {
        perror("fopen");
        return EXIT_FAILURE;
    }

    int ch;
    while ((ch = fgetc(source_file)) != EOF) {
        fputc(ch, destination_file);
    }

    fclose(source_file);
    fclose(destination_file);

    printf("File copied successfully from '%s' to '%s'\n", source_filename, destination_filename);

    return EXIT_SUCCESS;
}

