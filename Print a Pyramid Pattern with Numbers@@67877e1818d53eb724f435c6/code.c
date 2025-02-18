#include <stdio.h>

int main() {
    int row, i, j, space;
    scanf("%d", &row);
    for (i = 1; i <= row; i++) {
        for (space = 0; space < row - i; space++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
