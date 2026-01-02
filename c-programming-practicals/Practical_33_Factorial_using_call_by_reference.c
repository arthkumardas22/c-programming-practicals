#include <stdio.h>

void factorial(int n, long long *fact) {
    *fact = 1;
    for(int i = 1; i <= n; i++)
        *fact *= i;
}

int main() {
    int n;
    long long fact;

    printf("Enter a number: ");
    scanf("%d", &n);

    factorial(n, &fact);
    printf("Factorial = %lld", fact);
    return 0;
}