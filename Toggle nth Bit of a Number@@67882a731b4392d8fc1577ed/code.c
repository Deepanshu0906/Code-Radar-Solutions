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
    int n, t, i = 0, sum = 0;
    int binary[1000] = {0}; // Initialize to handle padding
    
    // Input the number and the bit position to toggle
    scanf("%d %d", &n, &t);
    
    // Convert number to binary
    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    // Ensure `t` is valid and toggle the bit
    if (t >= i) {
        // If `t` exceeds current binary length, we handle padding by considering it
        i = t + 1; // Update the length to include the bit at position `t`
    }
    binary[t] = binary[t] == 0 ? 1 : 0;

    // Convert binary back to decimal
    for (int j = 0; j < i; j++) {
        sum += binary[j] * myPow(2, j);
    }

    // Output the result
    printf("%d\n", sum);
    return 0;
}
