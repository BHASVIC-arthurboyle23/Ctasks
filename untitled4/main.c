#include <stdio.h>

int main() {
    FILE *file;
    char name[30];
    int code, chars, i, n, marks;
    file = fopen("C:\\Users\\arthur.boyle23\\arthurboyle-laura-compsci\\Ctasks\\filehandling", "r");
    if (file==NULL){
        printf("Error in accessing file.");
        exit(1);
    }
}
