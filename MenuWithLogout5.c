#include <stdio.h>
#include <string.h>

// Function 
void user_menu();
void booking_ticket();
void cancel_ticket();
void check();
void bus_101();
void bus_102();
void bus_103();
void logout();

// Global variables 
char username[20], password[20];

int booked_101 = 0, booked_102 = 0, booked_103 = 0;
int cancelled_101 = 0, cancelled_102 = 0, cancelled_103 = 0;

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
        user_menu(); 
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

    if (bus_number == 101) {
        booked_101 += seats;
    } else if (bus_number == 102) {
        booked_102 += seats;
    } else if (bus_number == 103) {
        booked_103 += seats;
    }

    printf("Ticket booked successfully! %d seat(s) booked on bus %d.\n", seats, bus_number);
}

// Cancel function
void cancel_ticket() {
    int bus_number, seats;
    printf("\n--- Cancel Ticket ---\n");
    printf("Enter bus number (101/102/103): ");
    scanf("%d", &bus_number);
    printf("Enter number of seats to cancel: ");
    scanf("%d", &seats);

    if (bus_number == 101) {
        cancelled_101 += seats;
        if (booked_101 >= seats) booked_101 -= seats;
    } else if (bus_number == 102) {
        cancelled_102 += seats;
        if (booked_102 >= seats) booked_102 -= seats;
    } else if (bus_number == 103) {
        cancelled_103 += seats;
        if (booked_103 >= seats) booked_103 -= seats;
    }

    printf("Cancel successful! %d seat(s) cancelled on bus %d.\n", seats, bus_number);
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
    printf("Source:          Aligarh\n");
    printf("Destination:     Hathras\n");
    printf("Total seats:     60\n");
    printf("Fare:            800.00\n");
    printf("Booked seats:    %d\n", booked_101);
    printf("Cancelled:       %d\n", cancelled_101);
    printf("Available:       %d\n", 60 - booked_101);
}

void bus_102() {
    printf("\nBus Number:    102\n");
    printf("Source:          Gurugram\n");
    printf("Destination:     Delhi\n");
    printf("Total seats:     50\n");
    printf("Fare:            400.00\n");
    printf("Booked seats:    %d\n", booked_102);
    printf("Cancelled:       %d\n", cancelled_102);
    printf("Available:       %d\n", 50 - booked_102);
}

void bus_103() {
    printf("\nBus Number:    103\n");
    printf("Source:          Ghaziabad\n");
    printf("Destination:     Bulandshahr\n");
    printf("Total seats:     40\n");
    printf("Fare:            500.00\n");
    printf("Booked seats:    %d\n", booked_103);
    printf("Cancelled:       %d\n", cancelled_103);
    printf("Available:       %d\n", 40 - booked_103);
}

// Logout function
void logout() {
    printf("\nLogout successful! Thank you for using the system.\n");
}
