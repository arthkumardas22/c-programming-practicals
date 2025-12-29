#include <stdio.h>

int main() {
    float basic, hra, da, total;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    hra = 0.20 * basic;
    da = 0.50 * basic;
    total = basic + hra + da;

    printf("Total Salary = %.2f", total);
    return 0;
}