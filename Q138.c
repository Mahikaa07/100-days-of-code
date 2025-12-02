#include <stdio.h>
enum Role { ADMIN, USER, GUEST };
int main() {
    const char *roleNames[] = { "ADMIN", "USER", "GUEST" };
    for (int i = ADMIN; i <= GUEST; i++) {
        printf("Role: %s, Value: %d\n", roleNames[i], i);
    }
    return 0;
}
