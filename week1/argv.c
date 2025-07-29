#include <stdio.h>

int main(int count, char *args[]) {
    printf("Total arguments passed: %d\n", count);

    if (count > 0) {
        puts("Arguments received:");
        for (int index = 0; index < count; ++index) {
            printf("  [%d] %s\n", index, args[index]);
        }
    } else {
        puts("No arguments provided.");
    }

    return 0;
}

