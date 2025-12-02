#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
    char s[1000];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    int n = strlen(s);
    for (int i = 0; i < n; i++) {
        s[i] = tolower(s[i]);
    }
    for (int i = 0; i < n; i++) {
        if (isalpha(s[i])) {
            s[i] = toupper(s[i]);
            break;
        }
    }
    printf("Sentence case: %s\n", s);
    return 0;
}
