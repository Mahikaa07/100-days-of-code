#include <stdio.h>
enum Gender { MALE, FEMALE, OTHER };
struct Person {
    char name[50];
    enum Gender gender;
};
int main() {
    struct Person p1 = { "Avika", FEMALE };
    printf("Name: %s\n", p1.name);
    printf("Gender: ");
    switch (p1.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
        default:
            printf("Unknown\n");
    }
    return 0;
}
