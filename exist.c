#include <stdio.h>
#include <stdbool.h>

bool fileExists(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file != NULL) {
        fclose(file);
        return true;
    }
    return false;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    const char *filename = argv[1];

    if (fileExists(filename)) {
        printf("File %s exists.\n", filename);
    } else {
        printf("File %s does not exist.\n", filename);
    }

    return 0;
}

