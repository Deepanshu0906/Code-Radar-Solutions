#include <stdio.h>

int main() {
    int n, t, i = 0;
    int binary[1000];

    // Read inputs
    scanf("%d %d", &n, &t);

    // Convert the number to binary and store it in reverse order
    while (n > 0) {
        binary[i] = n % 2; // Store the remainder (bit value)
        n = n / 2;         // Divide by 2 to get the next bit
        i++;
    }

    // Ensure that the array has at least `t` bits
    if (t > i) {
        for (int j = i; j < t; j++) {
            binary[j] = 0; // Fill with zeros if necessary
        }
        i = t; // Update the length of the binary array
    }

    // Toggle the t-th bit (from LSB). The index in the binary array is t-1.
    int index_to_toggle = t - 1;
    binary[index_to_toggle] = 1 - binary[index_to_toggle]; // Flip the bit

    // Convert the modified binary back to decimal
    int sum = 0, multiplier = 1;
    for (int j = 0; j < i; j++) {
        sum += binary[j] * multiplier;
        multiplier *= 2; // Move to the next power of 2
    }
    printf("%d\n", sum);

    return 0;
}