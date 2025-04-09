void selectionSort(char arr[][10], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (strcmp(arr[j], arr[minIdx]) < 0) { 
                minIdx = j;
            }
        }
        char temp[10];
        strcpy(temp, arr[minIdx]);
        strcpy(arr[minIdx], arr[i]);
        strcpy(arr[i], temp);
    }
}

void printArray(char arr[][10], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s ", arr[i]);
    }
    printf("\n");
}
