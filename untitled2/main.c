#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int credits = 10;
    int guess1;
    int random;
    while (credits >= 1) {
        srand(time(NULL));
        int random = (rand() % 30);
        printf("Please input your guess for the random number: ");
        int guess1 = scanf("&d", guess1);
        if (guess1 == random) {
            if (guess1 % 10 == 0) {
                credits = credits * 3;
            }
            if (guess1 == 3 || guess1 == 5 || guess1 == 7 || guess1 == 11 || guess1 == 13 || guess1 == 17 ||
                guess1 == 19 || guess1 == 23 || guess1 == 29) {
                credits = credits * 5;
            }
            if (guess1 < 5) {
                credits = credits * 2;
            } else {
                break;
            }
        }
    }
    if (guess1 != random) {
        printf("Sorry, wrong answer");
    }
}