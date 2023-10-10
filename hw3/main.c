#include <stdio.h>

int main() {
    float grosssalary;
    float tax;
    float nationalinsurance;
    printf("Please input your gross salary: ");
    fflush(stdin);
    scanf("%f", &grosssalary);
    if ((grosssalary > 12500) && (grosssalary <= 50000)) {
        tax = (0.2*grosssalary);
    }
    if ((grosssalary > 50000) && (grosssalary <= 150000)) {
        tax = (0.4 * grosssalary);
    }
    if (grosssalary > 150000) {
        tax = (0.45 * grosssalary);
    }
    if ((grosssalary/52) > 190) {
        nationalinsurance = (0.1325 * (grosssalary/52));
        if ((grosssalary/52) >= 967){
            if (((grosssalary / 52) - 967) > 0) {
                nationalinsurance = ((0.1325 * 967) + (((grosssalary / 52) - 967) * 0.0325))*52;
            }
        }
    }
    float netincome = (grosssalary-tax-nationalinsurance);
    printf("Your total tax paid per year is: %f\n Your total National Insurance paid is: %f\n Your net income is: %f", tax, nationalinsurance, netincome);
}
