// Your code here...
void selectionSort(int arr[n],n){
    for(int step=0;step<n-1;step++){
        for( int i=0;i<n-step-1;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i+1]=arr[i];
                arr[i]=temp;
            }
        }
    }
}
void printArray(int arr[n],n){
    for(int i=0;i<n;i++){
        print("%d ",arr[i]);
    }
}