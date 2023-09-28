#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main() {
    srand(time(NULL));
    printf("A number between 0 and 99: %d", rand() % 10);

}
