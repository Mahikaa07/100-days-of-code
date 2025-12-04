#include <stdio.h>
#include <string.h>

struct Passenger {
    char name[50];
    char gender[10];
    int age;
    char source[50];
    char destination[50];
    char trainName[50];
    int seatNo;
    float fare;
};
int main() {
    int numPassengers, distance, trainChoice;
    static int seatCounter = 1;

    const char *trains[] = {
        "Shatabdi Express",
        "Rajdhani Express",
        "Duronto Express",
        "Garib Rath",
        "Intercity Express"
    };
    int totalTrains = sizeof(trains) / sizeof(trains[0]);

    printf("Enter number of passengers: ");
    scanf("%d", &numPassengers);

    struct Passenger p[numPassengers];

    printf("\nAvailable Trains:\n");
    for (int i = 0; i < totalTrains; i++) {
        printf("%d. %s\n", i + 1, trains[i]);
    }

    printf("Enter the train number you want to board: ");
    scanf("%d", &trainChoice);

    if (trainChoice < 1 || trainChoice > totalTrains) {
        printf("Invalid train choice!\n");
        return 0;
    }

    printf("Enter distance between source and destination (in km): ");
    scanf("%d", &distance);

    for (int i = 0; i < numPassengers; i++) {
        printf("\n--- Enter details for Passenger %d ---\n", i + 1);

        printf("Enter name: ");
        scanf("%s", p[i].name);

        printf("Enter gender (Male/Female/Other): ");
        scanf("%s", p[i].gender);

        printf("Enter age: ");
        scanf("%d", &p[i].age);

        printf("Enter source place: ");
        scanf("%s", p[i].source);

        printf("Enter destination place: ");
        scanf("%s", p[i].destination);

        strcpy(p[i].trainName, trains[trainChoice - 1]);
        p[i].seatNo = seatCounter++;

        float baseFare = distance * 10.0;
        if (p[i].age <= 12) {
            p[i].fare = baseFare * 0.5;
        } else if (p[i].age >= 60) {
            p[i].fare = baseFare * 0.7;
        } else {
            p[i].fare = baseFare;
        }
    }

    printf("\n========== TRAIN TICKETS ==========\n");
    for (int i = 0; i < numPassengers; i++) {
        printf("\n--- Ticket for Passenger %d ---\n", i + 1);
        printf("Passenger Name   : %s\n", p[i].name);
        printf("Gender           : %s\n", p[i].gender);
        printf("Age              : %d\n", p[i].age);
        printf("Train Name       : %s\n", p[i].trainName);
        printf("Source           : %s\n", p[i].source);
        printf("Destination      : %s\n", p[i].destination);
        printf("Seat Number      : %d\n", p[i].seatNo);
        printf("Fare             : Rs %.2f\n", p[i].fare);

        if (p[i].age <= 12)
            printf("Discount Applied : Child (50%%)\n");
        else if (p[i].age >= 60)
            printf("Discount Applied : Senior (30%%)\n");
        else
            printf("Discount Applied : None\n");
    }
    printf("\n===================================\n");

    return 0;
}
