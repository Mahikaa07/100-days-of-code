#include <stdio.h>
int main() {
    FILE *fp;
    char buffer[256];
    fp = fopen("info.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open file info.txt\n");
        return 1;
    }
    printf("Contents of info.txt:\n");
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }
    fclose(fp);
    return 0;
}
