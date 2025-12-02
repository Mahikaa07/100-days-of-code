#include <stdio.h>
int main() {
    char str[100];
    int freq[26] = {0};
    int i = 0, found = 0;
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            int index = str[i] - 'a';
            freq[index]++;
            if (freq[index] == 2) {
                printf("First repeating lowercase alphabet: %c\n", str[i]);
                found = 1;
                break;
            }
        }
        i++;
    }
    if (!found)
        printf("No repeating lowercase alphabet found.\n");
    return 0;
}
