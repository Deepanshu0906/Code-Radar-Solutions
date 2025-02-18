// Your code here...
#include <stdio.h>
int main() {
    int row, i, j;
    scanf("%d", &row);
    for (i = 0; i < row; i++) {
        char alpha = 'A';
        for (j = 0; j < row - i; j++) {
            printf("%c ", alpha + j);
        }
        printf("\n");
    }
}
