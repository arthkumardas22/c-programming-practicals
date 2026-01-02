#include <stdio.h>

void calculate(int *a, int *b, int *add, int *sub, int *mul, float *div) {
    *add = *a + *b;
    *sub = *a - *b;
    *mul = (*a) * (*b);
    *div = (float)(*a) / (*b);
}

int main() {
    int a, b, add, sub, mul;
    float div;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    calculate(&a, &b, &add, &sub, &mul, &div);

    printf("Addition = %d\nSubtraction = %d\nMultiplication = %d\nDivision = %.2f",
           add, sub, mul, div);
    return 0;
}