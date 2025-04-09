// Your code here...
void selectionSort(char arr[*],int n){
    for(int step=0;step<n-1;step++){
        for( int i=0;i<n-step-1;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
}
void printArray(char arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}