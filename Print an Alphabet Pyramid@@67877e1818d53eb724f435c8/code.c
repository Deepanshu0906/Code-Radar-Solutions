// Your code here...
#include <stdio.h>

int main() {
    int row, i, j, space;
    char alpha='A'
    scanf("%d", &row);
    for (i = 1; i <= row; i++) {
        for (space = 0; space < row - i; space++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("%c ", aplha+j);
        }
        printf("\n");
    }
    return 0;
}
