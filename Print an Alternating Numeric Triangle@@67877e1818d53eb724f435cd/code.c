// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int num = i % 2; // Start with 0 if row index is even, otherwise 1
        for (int j = 0; j <= i; j++) {
            printf("%d ", num);
            num = 1 - num; // Toggle between 1 and 0
        }
        printf("\n");
    }

    return 0;
}
