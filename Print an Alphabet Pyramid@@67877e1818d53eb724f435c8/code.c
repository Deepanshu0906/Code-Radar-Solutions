// Your code here...
#include <stdio.h>

int main() {
    int row, i, j, space;
    char alpha='A';
    scanf("%d", &row);
    for (i = 0; i <= row-1; i++) {
        for (space = 0; space < row - i-2; space++) {
            printf(" ");
        }
        for (j = 0; j <= i; j++) {
            printf("%c ", alpha +j);
        }
        printf("\n");
    }
}
