#include <stdio.h>

int main() {
    char str[50];
    int i, j;
    char temp;

    printf("Enter string: ");
    scanf("%s", str);

    for (j = 0; str[j] != '\0'; j++);

    for (i = 0, j = j - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed string = %s", str);
    return 0;
}

