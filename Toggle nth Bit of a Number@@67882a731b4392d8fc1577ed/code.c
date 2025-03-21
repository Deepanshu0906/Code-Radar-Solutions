#include <stdio.h>

// Custom function to calculate power
int myPow(int base, int exp) {
    int result = 1;
    while (exp > 0) {
        result *= base;
        exp--;
    }
    return result;
}

int main() {
    int n, t, i = 0, count = 0, sum = 0;
    int binary[1000];
    
    scanf("%d %d", &n, &t);
    
    // Convert n to binary
    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    // Toggle the t-th bit
    if (binary[t] == 0) {
        binary[t] = 1;
    } else {
        binary[t] = 0;
    }

    // Convert binary back to decimal
    for (int j = 0; j < i; j++) {
        sum += binary[j] * myPow(2, j);
    }

    printf("%d\n", sum);
    return 0;
}
