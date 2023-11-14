#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int dining_tables[3][2];
char bookingID[255];
void book_a_dinner_table() {
    printf("Please enter your Booking ID: ");
    fflush(stdin);
    scanf("%s", bookingID);
    int i, x, time;
    char meal_sitting[10];
    char board_type[3];
    printf("Are you staying in an FB, HB, or BB arrangement?: ");
    fflush(stdin);
    scanf("%s", board_type);
    for (i = 0; i < 3; i++) {
        for (x = 0; x < 2; x++) {
            dining_tables[i][x] = 0;
        }
    }
    if (strcmp(board_type, "FB") == 0 || strcmp(board_type, "HB") == 0) {
        printf("Available Tables:\n");
        for (i = 0; i < 3; i++) {
            for (x = 0; x < 2; x++) {
                if (i == 0) {
                    printf("Table Endor at ");
                }
                else if (i == 1) {
                    printf("Table Naboo at ");
                }
                else {
                    printf("Table Tatooine at ");
                }
                if (x == 0) {
                    printf("7pm: ");
                }
                else {
                    printf("9pm: ");
                }
                if (dining_tables[i][x] == 0) {
                    printf("Available\n");
                }
                else {
                    printf("Taken\n");
                }
            }
        }
        printf("Please choose a table (Endor, Naboo, or Tatooine), a time (7 or 9), and number of guests for reservation: ");
        fflush(stdin);
        scanf("%s %d %d", meal_sitting, &time, &num_of_guests);
        int table;
        if (strcmp(meal_sitting, "Endor") == 0) {
            table = 0;
        }
        else if (strcmp(meal_sitting, "Naboo") == 0) {
            table = 1;
        }
        else if (strcmp(meal_sitting, "Tatooine") == 0) {
            table = 2;
        }
        else {
            table = -1;
        }
        if (table >= 0 && table < 3 && (time == 7 || time == 9)) {
            if (dining_tables[table][time / 7 - 1] == 0) {
                if (num_of_guests <= 4) {
                    printf("Reservation confirmed for Table %s at %d pm for %d guests.\n", meal_sitting, time, num_of_guests);
                    dining_tables[table][time / 7 - 1] = 1;
                }
                else {
                    printf("Not enough space on the table for %d guests.\n", num_of_guests);
                }
            }
            else {
                printf("The selected table and time are not available.\n");
            }
        }
        else {
            printf("Invalid choice of table, time, or number of guests.\n");
        }
    }
    else {
        printf("Sorry, only FB and HB can book a reservation.\n");
    }
}
int main() {
    book_a_dinner_table();
    return 0;
}