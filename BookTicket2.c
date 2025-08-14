#include <stdio.h>

// Function 
void check();
void user_menu();
void bus_101();
void bus_102();
void bus_103();
void booking_ticket();
void cancel_ticket();

int main() {  
    user_menu();
    return 0;
}

void user_menu() {
    int number;
    printf("1. Booking ticket\n");
    printf("2. Cancel ticket\n");
    printf("3. Check bus status\n");
    printf("4. Logout\n");
    printf("Select one option: ");
    scanf("%d", &number);

    if (number == 1) {         
        booking_ticket();
    } else if (number == 2) {   
        cancel_ticket();
    } else if (number == 3) {  
        check();
    } else if (number == 4) {   
        printf("Logged out successfully.\n");
    } else {
        printf("Invalid option.\n");
    }
}

void booking_ticket() {
    printf("\n--- Booking Ticket ---\n");
    printf("Ticket booked successfully!\n");
}

void cancel_ticket() {
    printf("\n--- Cancel Ticket ---\n");
    printf("Ticket cancelled successfully!\n");
}

void check() {
    int number;
    printf("Please enter bus number: ");
    scanf("%d", &number);

    if (number == 101) {
        bus_101();
    } else if (number == 102) {
        bus_102();
    } else if (number == 103) {
        bus_103();
    } else {
        printf("Invalid bus number.\n");
    }
}

void bus_101() {
    printf("\nBus Number: 101\n");
    printf("Source city: Aligarh\n");
    printf("Destination city: Hathras\n");
    printf("Total seats: 60\n");
    printf("Available seats: 40\n");
    printf("Fare: 800.00\n");
}

void bus_102() {
    printf("\nBus Number: 102\n");
    printf("Source city: Gurugram\n");
    printf("Destination city: Dehli\n");
    printf("Total seats: 50\n");
    printf("Available seats: 25\n");
    printf("Fare: 500.00\n");
}

void bus_103() {
    printf("\nBus Number: 103\n");
    printf("Source city: Gaziabad\n");
    printf("Destination city: Bulandshahr\n");
    printf("Total seats: 40\n");
    printf("Available seats: 20\n");
    printf("Fare: 550.00\n");
}
