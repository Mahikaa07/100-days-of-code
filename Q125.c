#include <stdio.h>
int main() {
    FILE *fp;
    char filename[100];
    char newLine[256];
    printf("Enter filename: ");
    scanf("%s", filename);
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }
    getchar();
    printf("Enter a new line of text: ");
    fgets(newLine, sizeof(newLine), stdin);
    fprintf(fp, "%s", newLine);
    fclose(fp);
    printf("Text successfully appended to %s\n", filename);
    return 0;
}
