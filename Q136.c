#include <stdio.h>
enum Menu { ADD, SUBTRACT, MULTIPLY };
int main() {
    int choice;
    int a, b, result;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("0. ADD\n");
    printf("1. SUBTRACT\n");
    printf("2. MULTIPLY\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice) {
        case ADD:
            result = a + b;
            printf("Result = %d\n", result);
            break;
        case SUBTRACT:
            result = a - b;
            printf("Result = %d\n", result);
            break;
        case MULTIPLY:
            result = a * b;
            printf("Result = %d\n", result);
            break;
        default:
            printf("Invalid choice!\n");
    }
    return 0;
}
