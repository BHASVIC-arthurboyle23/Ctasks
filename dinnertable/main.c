#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int dining_tables[3][2];
int bookingID;
void book_a_dinner_table() {
    fflush(stdin);
    bookingID = scanf("Please enter your bookingID: ");
    int i, x, time;
    char meal_sitting[10];
    char board_type[3];
    printf("Are you staying in an FB, HB, or BB arrangement?: ");
    fflush(stdin);
    scanf("%s", &board_type);
    if (strcmp(board_type, "FB") == 0 || strcmp(board_type, "HB") == 0) {
        printf("Available Tables:\n");
        for (i = 0; i < 3; i++) {
            for (x = 0; x < 2; x++) {
                if (i == 0) {
                    printf("Table Endor at ");
                } else if (i == 1) {
                    printf("Table Naboo at ");
                } else {
                    printf("Table Tatooine at ");
                }

                if (x == 0) {
                    printf("7 pm\n");
                } else {
                    printf("9 pm\n");
                }
            }
        }

        printf("Please choose a table (Endor, Naboo, or Tatooine) and a time (7 or 9) for reservation: ");
        fflush(stdin);
        scanf("%s %d", meal_sitting, &time);
        int table;
        if (strcmp(meal_sitting, "Endor") == 0) {
            table = 0;
        } else if (strcmp(meal_sitting, "Naboo") == 0) {
            table = 1;
        } else if (strcmp(meal_sitting, "Tatooine") == 0) {
            table = 2;
        } else {
            table = -1;
        }

        if (table >= 0 && table < 3 && (time == 7 || time == 9)) {
            if (dining_tables[table][time / 7 - 1] == 0) {
                printf("Reservation confirmed for Table %s at %d pm.\n", meal_sitting, time);
                dining_tables[table][time / 7 - 1] = 1;
            } else {
                printf("The selected table and time are not available.\n");
            }
        } else {
            printf("Invalid choice of table or time.\n");
        }
    } else {
        printf("Sorry, only FB and HB can book a reservation.\n");
    }
}

int main() {
    book_a_dinner_table();
    return 0;
}