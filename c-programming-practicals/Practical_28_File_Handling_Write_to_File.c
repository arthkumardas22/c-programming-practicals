#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("data.txt", "w");

    fprintf(fp, "Hello File Handling");
    fclose(fp);

    printf("Data written to file");
    return 0;
}
