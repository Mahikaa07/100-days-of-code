#include <stdio.h>
int main() {
    char str1[100], str2[100];
    int freq[256] = {0};
    int i = 0;
    printf("Enter first string: ");
    scanf("%[^\n]", str1);
    getchar();
    printf("Enter second string: ");
    scanf("%[^\n]", str2);
    while (str1[i] != '\0') {
        freq[(unsigned char)str1[i]]++;
        i++;
    }
    i = 0;
    while (str2[i] != '\0') {
        freq[(unsigned char)str2[i]]--;
        i++;
    }
    for (i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("Strings are not anagrams.\n");
            return 0;
        }
    }
    printf("Strings are anagrams.\n");
    return 0;
}
