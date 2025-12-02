#include <stdio.h>
#include <string.h>
int main() {
    char date[20];
    char day[3], year[5];
    printf("Enter date in format dd/04/yyyy: ");
    scanf("%s", date);
    strncpy(day, date, 2);
    day[2] = '\0';
    strncpy(year, date + 5, 4);
    year[4] = '\0';
    printf("Converted date: %s-Apr-%s\n", day, year);
    return 0;
}
