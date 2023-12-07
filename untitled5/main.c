#include <stdio.h>
int num,x;
int number(int num){
    if (num <= 1){
        return 1;
    }
    else{
        return num + number(num-1);
    }
}
int main() {
    printf("Please enter a number: ");
    scanf("%d", &num);
    printf((number(num));
}