// Your code here...
void printPrimesInRange(int a, int b) {
    int found=0;
    for (int i = a; i <= b; i++) {
        if (i < 2) {
            continue;
        }
        int count = 0;
        
        for (int j = 2; j * j <= i; j++) { 
            if (i % j == 0) {
                count++;
                break;
            }
        }

        if (count == 0) {
            printf("%d ", i);
            int found=1;
        }
    }
if(found==0){
    printf("No prime numbers");
}
}