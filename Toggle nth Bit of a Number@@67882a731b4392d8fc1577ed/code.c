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
    int binary[1000];
    
    // Input the number and the bit position to toggle
    scanf("%d %d", &n, &t);
    
    // Convert number to binary
    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    // Check if the position `t` is within bounds
    if (t >= i) {
        printf("Error: Bit position %d is out of bounds for the binary representation.\n", t);
        return 1; // Exit the program with an error code
    }

    // Toggle the bit at position `t`
    binary[t] = binary[t] == 0 ? 1 : 0;

    // Convert binary back to decimal
    for (int j = 0; j < i; j++) {
        sum += binary[j] * myPow(2, j);
    }

    // Output the result
    printf("%d\n", sum);
    return 0;
}
