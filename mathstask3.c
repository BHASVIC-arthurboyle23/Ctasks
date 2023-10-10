#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    float num1;
    float num2;
    char operator;
    float result;
    setbuf(stdout,NULL);
    printf("Please enter your first number: ");
    fflush(stdin);
    scanf("%f", &num1);;
    printf("Please enter your second number: ");
    fflush(stdin);
    scanf("%f", &num2);
    printf("Would you like to a) Add, b) Subtract, c) Multiply,or d) Divide?: \n");
    fflush(stdin);
    scanf("%c", &operator);
    if (!(isdigit(num1) && isdigit(num2))) {
        switch(operator) {
            case 'a':
                result = (num1 + num2);
                printf("%f + %f = %f", num1, num2, result);
                break;
            case 'b':
                result = (num1 - num2);
                printf("%f - %f = %f", num1, num2, result);
                break;
            case 'c':
                result = (num1 * num2);
                printf("%f / %f = %f", num1, num2, result);
                break;
            case 'd':
                result = (num1 / num2);
                printf("%f * %f = %f", num1, num2, result);
                break;
            default:
                printf("Please choose a, b, c, or d.");
        }
    }
    else {
        printf("Please input a number");
    }
}