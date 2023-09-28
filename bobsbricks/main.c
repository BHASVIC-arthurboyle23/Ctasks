#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main() {
    int len = 0;
    int height = 0;
    int wallnum = 0;
    float pallets = 0;
    int price = 0;
    printf("Enter wall length: ");
    scanf("%d", &len);
    printf("Enter wall height: ");
    scanf("%d", &height);
    printf("Enter number of walls: ");
    scanf("%d", &wallnum);
    pallets = ((len*height*wallnum*1.5)/100);
    pallets = ceil(pallets);
    printf("%f \n", pallets*80);
    //80 being price per pallet
}