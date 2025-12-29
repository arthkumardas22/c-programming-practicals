#include <stdio.h>

void check(int n) {
    if (n % 2 == 0)
        printf("Even");
    else
        printf("Odd");
}

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    check(num);
    return 0;
}
