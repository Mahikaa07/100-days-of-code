#include <stdio.h>

int main() {
    int days_late;
    int fine = 0.0;

    printf("Enter the number of days the book is late: ");
    scanf("%d", &days_late);

    if (days_late <= 0) {
        printf("No fine. Book returned on time or early.\n");
    } else if (days_late > 30) {
        printf("Membership Cancelled due to returning the book more than 30 days late.\n");
    } else {
        if (days_late <= 5) {
            fine = days_late * 2;
        } 
        else if (days_late <= 10) { 
            fine = (5 * 2) + ((days_late - 5) * 4);
        } 
        else { 
            fine = (5 * 2) + (5 * 4) + ((days_late - 10) * 6);
        }
        printf("The library fine is: Rs %.2d\n", fine);
    }

    return 0;
}
