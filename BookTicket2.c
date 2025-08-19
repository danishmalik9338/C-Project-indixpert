#include <stdio.h>

// Global variables 
int booked_101 = 0, cancelled_101 = 0;
int booked_102 = 0, cancelled_102 = 0;
int booked_103 = 0, cancelled_103 = 0;

void bus_101() {
    printf("\nBus Number:    101\n");
    printf("Source:          Aligarh\n");
    printf("Destination:     Hathras\n");
    printf("Total seats:     60\n");
    printf("Fare:            800.00\n");
    if (booked_101 > 0) 
        printf("Booked seats:    %d\n", booked_101);
    if (cancelled_101 > 0) 
        printf("Cancelled:       %d\n", cancelled_101);
    printf("Available:       %d\n", 60 - booked_101);
}

void bus_102() {
    printf("\nBus Number:    102\n");
    printf("Source:          Gurugram\n");
    printf("Destination:     Delhi\n");
    printf("Total seats:     50\n");
    printf("Fare:            400.00\n");
    if (booked_102 > 0) 
        printf("Booked seats:    %d\n", booked_102);
    if (cancelled_102 > 0) 
        printf("Cancelled:       %d\n", cancelled_102);
    printf("Available:       %d\n", 50 - booked_102);
}

void bus_103() {
    printf("\nBus Number:    103\n");
    printf("Source:          Ghaziabad\n");
    printf("Destination:     Bulandshahr\n");
    printf("Total seats:     40\n");
    printf("Fare:            500.00\n");
    if (booked_103 > 0) 
        printf("Booked seats:    %d\n", booked_103);
    if (cancelled_103 > 0) 
        printf("Cancelled:       %d\n", cancelled_103);
    printf("Available:       %d\n", 40 - booked_103);
}

int main() {
    
    booked_101 = 10;
    cancelled_101 = 2;

    booked_102 = 5;

    booked_103 = 15;
    cancelled_103 = 3;

    // bus detail
    bus_101();
    bus_102();
    bus_103();

    return 0;
}
