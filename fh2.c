#include <stdio.h>

int main() {
    FILE *file = fopen("new1file.txt", "w");
    if (!file) {
        perror("fopen");
        return 1;
    }

    // File is created and opened successfully
    printf("File created and opened successfully\n");

    fclose(file);
    return 0;
}

