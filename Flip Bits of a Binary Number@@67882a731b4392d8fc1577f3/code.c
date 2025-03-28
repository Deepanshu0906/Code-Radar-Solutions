#include <stdio.h>

int myPow(int base, int exp) {
    int result = 1;
    while (exp > 0) {
        result *= base;
        exp--;
    }
    return result;
}

int main() {
    int n, i = 0, sum = 0, j;
    int binary[32] = {0};  // Initialize all elements to 0

    scanf("%d", &n);

    if (n == 0) { 
        printf("0\n");  // Zero is its own two's complement
        return 0;
    }

    // Convert to binary
    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    // Flip the bits (1's complement)
    for (j = 0; j < 32; j++) {
        binary[j] = 1 - binary[j];
    }

    // Add 1 to complete two's complement
    for (j = 0; j < 32; j++) {
        if (binary[j] == 0) {
            binary[j] = 1;
            break;
        } else {
            binary[j] = 0;
        }
    }

    // Convert back to decimal
    for (int k = 0; k < 32; k++) {
        sum += binary[k] * myPow(2, k);  
    }

    printf("%d\n", sum);
    return 0;
}