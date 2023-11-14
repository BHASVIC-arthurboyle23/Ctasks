#include <stdio.h>
#include<stdlib.h>
#include <time.h>

int main() {
    float creditpence = 100;
    float creditpounds;
    int roll;
    while (creditpence > 20) {
        printf("Would you like to 1) roll, or 2) leave?: ");
        fflush(stdin);
        scanf("%d", &roll);
        if (roll == 1) {
            creditpence = creditpence-20;
            srand(time(NULL));
            int random1 = (rand() % 10);
            int random2 = (rand() % 10);
            int random3 = (rand() % 10);
            if (((random1 == random2) || (random1 == random3) || (random2 == random3)) &&
                !((random1 == random2) && (random1 == random3)) &&
                !(((random1 == 9) && (random2 == 9) && random3 != 9) ||
                  ((random2 == 9) && (random3 == 9) && random1 != 9) ||
                  (random3 == 9) && (random1 == 9) && random2 != 9)) {
                creditpence = creditpence + 100;
            }
            if (((random1 == random2) && (random2 == random3) && (random1 != 7))) {
                creditpence = creditpence + 100;
            }
            if ((random1 == 7) && (random2 == 7) && (random3 == 7)) {
                creditpence = creditpence + 500;
            }
            if (((random1 == 9) && (random2 == 9) && random3 != 9) ||
                ((random2 == 9) && (random3 == 9) && random1 != 9) ||
                (random3 == 9) && (random1 == 9) && random2 != 9) {
                creditpence = creditpence - 100;
            }
            if (random1 == 9 && random2 == 9 && random3 == 9) {
                creditpence = 0;
            }
        }
        else{
            printf("You have ended with %.0f pence, or %.2fGBP \n", creditpence, (creditpence/100));
            break;
        }
        printf("You have %.0f pence, or  %0.2fGBP \n", creditpence, (creditpence/100));
    }
}
