#include <stdio.h>
#include <stdlib.h>

int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;  // Return 1 if the number is prime
}

int main(){
    int t;
    scanf("%d", &t);
    int *results = (int *)malloc(t * sizeof(int));  // Allocate memory for results array
    
    for (int i = 0; i < t; i++) {
        int num;
        scanf("%d", &num);
        results[i] = isPrime(num);  // Store the result in the array
    }
    
    for (int i = 0; i < t; i++) {
        printf("%d\n", results[i]);  // Print all results after all inputs are received
    }
    
    free(results);  // Free the allocated memory
    return 0;
}

