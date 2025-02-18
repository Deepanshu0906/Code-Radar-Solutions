// Your code here...
#include <stdio.h>
int main() {
    int row, i, j, space;
    scanf("%d", &row);
    for (i = 0; i < row; i++) {
        for (space = 0; space < row - i - 1; space++) {
            printf(" ");
        }
        for (j = 1; j < (i * 2) + 2; j++) {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
