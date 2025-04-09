// Your code here...
void printPrimesInRange(int a, int b) {
    for (int i = a; i <= b; i++) {
        if (i < 2) {
            continue;
        }
        int count = 0;
        
        for (int j = 2; j<= i; j++) { 
            if (i % j == 0) {
                count++;
                break;
            }
        }

        if (count == 0) {
            printf("%d ", i);
        }

    }
}