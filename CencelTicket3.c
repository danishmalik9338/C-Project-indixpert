#include <stdio.h>

// cancel page
void cancel();
void user_menu();

int main() {
    user_menu();
    return 0;
}

void user_menu() {
    int number;
    printf("1. Book Ticket\n");
    printf("2. Cancel Ticket\n");
    printf("3. Check Bus status\n");
    printf("4. Logout\n");
    printf("Select one option: ");
    scanf("%d", &number);

    if (number == 2) {
        cancel();
    } else {
        printf("Option %d selected.\n", number);
    }
}

void cancel() {
    int bus_number;
    int seat_number;

    printf("Enter bus number: ");
    scanf("%d", &bus_number);
    printf("Enter seat number: ");
    scanf("%d", &seat_number);

    printf("Cancel successful! Seat %d on bus number %d has been cancelled.\n",
           seat_number, bus_number);
}
