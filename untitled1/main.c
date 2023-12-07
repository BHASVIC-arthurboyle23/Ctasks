#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    int num1;
    int num2;
    char operator;
    int result;
    setbuf(stdout,NULL);
    printf("Please enter your first number: ");
    scanf("%d", &num1);
    fflush(stdin);
    printf("Please enter your second number: ");
    scanf("%d", &num2);
    fflush(stdin);
    printf("Would you like to a) Add, b) Subtract, c) Mutliply,or d) Divide?: \n");
    scanf("%s", &operator);
    switch(operator)
    {
        case 'a':
            result = (num1+num2);
            break;
        case 'b':
            result = (num1-num2);
            break;
        case 'c':
            result = (num1*num2);
            break;
        case 'd':
            result = (num1/num2);
            break;
    }
    printf("%d", result);
}