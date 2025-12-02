#include <stdio.h>
enum Role { ADMIN, USER, GUEST };
int main() {
    int choice;
    printf("Select a role:\n");
    printf("0. ADMIN\n");
    printf("1. USER\n");
    printf("2. GUEST\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice) {
        case ADMIN:
            printf("Welcome, Admin! You have full access.\n");
            break;
        case USER:
            printf("Hello, User! You have limited access.\n");
            break;
        case GUEST:
            printf("Hi, Guest! You can browse with restrictions.\n");
            break;
        default:
            printf("Invalid role selected!\n");
    }
    return 0;
}
