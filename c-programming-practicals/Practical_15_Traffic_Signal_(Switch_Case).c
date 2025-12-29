#include <stdio.h>

int main() {
    int choice;

    printf("1.Red\n2.Yellow\n3.Green\nEnter choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: printf("STOP"); break;
        case 2: printf("READY"); break;
        case 3: printf("GO"); break;
        default: printf("Invalid choice");
    }

    return 0;
}
