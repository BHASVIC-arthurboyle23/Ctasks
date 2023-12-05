#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int dining_tables[3][2];
int num_of_guests_booking;
int i, x, time;
char meal_sitting[10];
int table;
char user_info;
char bookingyesno=('Y');
void book_a_dinner_table() {
    while (true) {
        switch (bookingyesno) {
            case ('Y'):
                if (strcmp(Board_type, "FB") == 0 || strcmp(Board_type, "HB") == 0) {
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
                                printf("7pm: ");
                            } else {
                                printf("9pm: ");
                            }
                            if (dining_tables[i][x] == 0) {
                                printf("Available\n");
                            } else {
                                printf("Taken\n");
                            }
                        }
                    }
                    printf("Please choose a table, Endor, Naboo, or Tatooine: ");
                    fflush(stdin);
                    scanf("%s", meal_sitting);
                    printf("Please enter a time for your reservation, 7pm or 9pm: ");
                    fflush(stdin);
                    scanf("%d", &time, &num_of_guests_booking);
                    printf("Please enter the number of guests that will be at your reservation, 1-4 guests: ");
                    fflush(stdin);
                    scanf("%d", &num_of_guests_booking);
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
                            if ((num_of_guests_booking < 4) && (num_of_guests_booking > 0)) {
                                printf("Reservation confirmed for Table %s at %d pm for %d guests.\n", meal_sitting,
                                       time, num_of_guests_booking);
                                dining_tables[table][time / 7 - 1] = 1;
                            } else {
                                printf("Invalid number of guests, please choose 1-4\n", num_of_guests_booking);
                            }
                        } else {
                            printf("The selected table and time are not available.\n");
                        }
                    } else {
                        printf("Invalid choice of table, time, or number of guests.\n");
                    }
                } else {
                    printf("Sorry, only FB and HB can book a reservation.\n");
                }
                printf("Would you like to book anything else?(Y/N): ");
                fflush(stdin);
                scanf("%c", &bookingyesno);
            default:
        }
    }
}
int main() {
    for (i = 0; i < 3; i++) {
        for (x = 0; x < 2; x++) {
            dining_tables[i][x] = 0;
        }
    }
    book_a_dinner_table();
    return 0;
}