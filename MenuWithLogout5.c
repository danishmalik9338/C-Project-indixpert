#include <stdio.h>
#include <string.h>

// Function prototypes
void user_menu();
void booking_ticket();
void cancel_ticket();
void check();
void bus_101();
void bus_102();
void bus_103();
void logout();

// Global variables for login
char username[20], password[20];

int main() {
    char login_name[20], login_pass[20];

    // Sign Up
    printf("\n******** BUS REGISTRATION SYSTEM ********\n");
    printf("***************** Sign UP *******************\n");
    printf("Username: ");
    scanf("%s", username);
    printf("Password: ");
    scanf("%s", password);

    printf("\nAccount created successfully!\n");

    // Login
    printf("\n*************** USER LOGIN ****************\n");
    printf("Username: ");
    scanf("%s", login_name);
    printf("Password: ");
    scanf("%s", login_pass);

    if (strcmp(username, login_name) == 0 && strcmp(password, login_pass) == 0) {
        printf("\nLogin successful!\n");
        user_menu(); // Show menu after successful login
    } else {
        printf("\nLogin failed! Invalid credentials.\n");
    }

    return 0;
}

// Menu function
void user_menu() {
    int number;
    do {
        printf("\n*************** DASHBOARD ****************\n");
        printf("1. Booking Ticket\n");
        printf("2. Cancel Ticket\n");
        printf("3. Check Bus Status\n");
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
            logout();
        } else {
            printf("Invalid option! Try again.\n");
        }
    } while (number != 4);
}

// Booking function
void booking_ticket() {
    int bus_number, seats;
    printf("\n--- Booking Ticket ---\n");
    printf("Enter bus number (101/102/103): ");
    scanf("%d", &bus_number);
    printf("Enter number of seats to book: ");
    scanf("%d", &seats);
    printf("Ticket booked successfully! %d seat(s) booked on bus %d.\n", seats, bus_number);
}

// Cancel function
void cancel_ticket() {
    int bus_number, seat_number;
    printf("\n--- Cancel Ticket ---\n");
    printf("Enter bus number: ");
    scanf("%d", &bus_number);
    printf("Enter seat number: ");
    scanf("%d", &seat_number);
    printf("Cancel successful! Seat %d on bus %d has been cancelled.\n", seat_number, bus_number);
}

// Check bus status
void check() {
    int number;
    printf("Please enter bus number (101/102/103): ");
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

// Bus details
void bus_101() {
    printf("\nBus Number:    101\n");
    printf("Source:          Aligar\n");
    printf("Destination:     Hathras\n");
    printf("Total seats:     60\n");
    printf("Available seats: 40\n");
    printf("Fare:            800.00\n");
}

void bus_102() {
    printf("\nBus Number:    102\n");
    printf("Source:          Gurugram\n");
    printf("Destination:     Dehli\n");
    printf("Total seats:     50\n");
    printf("Available seats: 25\n");
    printf("Fare:            400.00\n");
}

void bus_103() {
    printf("\nBus Number:    103\n");
    printf("Source:          Ghaziabad\n");
    printf("Destination:     Bulanshahr\n");
    printf("Total seats:     40\n");
    printf("Available seats: 20\n");
    printf("Fare:            500.00\n");
}

// Logout function
void logout() {
    printf("\nLogout successful! Thank you for using the system.\n");
}
