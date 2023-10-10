#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
    char day;
    int adultticketnum;
    int childticketnum;
    float price;
    printf("Please input your visit day type: W for weekday, S for Saturday/Sunday, or B for Bank Holiday: \n");
    scanf("%s", &day);
    printf("Please input your desired number of child tickets: \n");
    fflush(stdin);
    scanf("%d", &childticketnum);
    printf("Please input your desired number of adult tickets: \n");
    fflush(stdin);
    scanf("%d", &adultticketnum);
    switch(day)
    {
        case 'W':
            price = ((5*childticketnum)+(8*adultticketnum));
            if ((adultticketnum+childticketnum)>8) {
                price = (0.9*price);
            }
            break;
        case 'S':
            price = ((7.5*childticketnum)+(12*adultticketnum));
            if ((adultticketnum+childticketnum)>8) {
                price = (0.9*price);
            }
            break;
        case 'B':
            price = ((7.5*childticketnum)+(14*adultticketnum));
            if ((adultticketnum+childticketnum)>8) {
                price = (0.9*price);
            }
            break;
    }
    printf("Your total price is %f", price);
}
