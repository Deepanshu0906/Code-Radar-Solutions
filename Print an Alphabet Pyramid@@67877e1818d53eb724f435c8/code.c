// Your code here...
#include <stdio.h>

int main() {
    int row, i, j;
    char ch = 'A';
    scanf("%d", &row);
    for (i = 0; i < row; i++) {
        for (j = 0; j <= i; j++) {
            printf("%c ", ch + j);
        }
        printf("\n");
    }
    return 0;
}
