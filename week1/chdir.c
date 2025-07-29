#include <stdio.h>
#include <unistd.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    char path[PATH_MAX];
    int status;

    const char *target_dir;

    if (argc >= 2)
        target_dir = argv[1];
    else
        target_dir = "..";

    status = chdir(target_dir);

    if (status != 0) {
        perror("chdir failed");
    } else {
        if (getcwd(path, sizeof(path)) == NULL) {
            perror("getcwd failed");
        } else {
            printf("Current directory: %s\n", path);
        }
    }

    return 0;
}
