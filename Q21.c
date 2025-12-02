#include <stdio.h>
int main() {
    int month;
    printf("enter a no between 1-12:\n");
    scanf("%d", &month);

    switch(month) {
        case 1:
        printf("January\n");
        printf("It has 31 days\n");
        break;
        case 2:
        printf("February\n");
        printf("It has 28 days on a non leap year and 29 on a leap year\n");
        break;
        case 3:
        printf("March\n");
        printf("It has 31 days\n");
        break;
        case 4:
        printf("April\n");
        printf("It had 30 days\n");
        break;
        case 5:
        printf("May\n");
        printf("It has 31 days\n");
        break;
        case 6:
        printf("June\n");
        printf("It has 30 days\n");
        break;
        case 7:
        printf("July\n");
        printf("It has 31 days\n");
        break;
        case 8:
        printf("August\n");
        printf("It has 31 days\n");
        break;
        case 9:
        printf("September\n");
        printf("It has 30 days\n");
        break;
        case 10:
        printf("October\n");
        printf("It has 31 days\n");
        break;
        case 11:
        printf("November\n");
        printf("It has 30 days\n");
        break;
        case 12:
        printf("December\n");
        printf("It has 31 days\n");
        break;
        default:
        printf("Invalid input!");
        break;
    }
return 0;
}
