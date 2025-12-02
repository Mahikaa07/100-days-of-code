#include <stdio.h>
#include <string.h>
int main() {
    char str[200];
    int i = 0, len;
    printf("Enter full name: ");
    scanf("%[^\n]", str);
    len = strlen(str);
    if (str[0] != ' ')
        printf("%c", str[0]);
    while (str[i] != '\0') {
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0') {
            int j = i + 1;
            int isLast = 1;
            while (str[j] != '\0') {
                if (str[j] == ' ') {
                    isLast = 0;
                    break;
                }
                j++;
            }
            if (isLast) {
                printf(" ");
                while (str[i+1] != '\0') {
                    printf("%c", str[i+1]);
                    i++;
                }
                break;
            } else {
                printf("%c", str[i+1]);
            }
        }
        i++;
    }
    printf("\n");
    return 0;
}
