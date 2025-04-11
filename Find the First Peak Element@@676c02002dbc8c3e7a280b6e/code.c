// Your code here..
#include<stdio.h>
void peakElement(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1] && arr[i]>arr[i+2]){
            printf("%d",arr[i]);
            break;
        }else if(arr[i]>arr[i+1]&& arr[i]<arr[i+2]){
            printf("%d",arr[i+2]);
            break;
        }else if(arr[i]<arr[i+1]&& arr[i+1]<arr[i+2]){
            printf("%d",arr[i+2]);
            break;
        }else{
            printf("%d",arr[i+1]);
            break;
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    peakElement(arr,n);
}