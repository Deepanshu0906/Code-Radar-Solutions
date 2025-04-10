// Your code here...
int searchInRotatedArray(int arr[],int n,int target){
    for(i=0;i<n;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}