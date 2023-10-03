#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int random = ( rand() % 100);
    printf("Please input your guess for the random number: ");
    int guess1 = scanf("&d", guess1);
    if (guess1 == random) {
        printf("Congratulations, you are correct!");
    }
    if ((guess1 - 1) == random) {
        printf("So close!");

    }
    if ((guess1 + 1) == random) {
        printf("So close!");

    }
    if (guess1 != random) {
        printf("Sorry, wrong answer");
    }
}
