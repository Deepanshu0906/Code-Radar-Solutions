// Your code here...
#include <stdio.h>
int main() {
    int row, i, j, space;
    scanf("%d", &row);
    for (i = 0; i < row; i++) {
        for (space = 0; space < row - i - 1; space++) {
            printf(" ");
        }
        for (j = 0; j < (i * 2) + 1; j++) {
            printf("%d ",j+1);
        }
        printf("\n");
    }
    return 0;
}
