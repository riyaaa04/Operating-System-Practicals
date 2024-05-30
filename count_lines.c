#include <stdio.h>

int main(int argc, char *argv[]) {
    FILE *file;
    int count = 0;
    char c;

    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    file = fopen(argv[1], "r");

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Counting lines
    while ((c = fgetc(file)) != EOF) {
        if (c == '\n') {
            count++;
        }
    }

    printf("Number of lines in %s: %d\n", argv[1], count);

    fclose(file);

    return 0;
}

