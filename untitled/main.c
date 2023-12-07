#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
    char day[2];
    int adultticketnum;
    int childticketnum;
    float price;
    printf("Please input your visit day type: W for weekday, S for Saturday/Sunday, or B for Bank Holiday: \n");
    scanf("%s", day);
    printf("Please input your desired number of child tickets: \n");
    fflush(stdin);
    scanf("%d", &childticketnum);
    printf("Please input your desired number of adult tickets: \n");
    fflush(stdin);
    scanf("%d", &adultticketnum);
    printf(day);
    if (strcmp(day, ("B"))) {
        printf("j");
    }
    if ((adultticketnum+childticketnum) >= 0) {
        printf(".");
    }

}
