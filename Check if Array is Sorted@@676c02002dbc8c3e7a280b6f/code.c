// Your code here...
#include<stdio.h>
int main(){
    int n,count=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0,i<n;i++){
        scanf("%d",arr[i]);
    }
    for(int j=0;j<n;j++){
        if(arr[j]>=arr[j+1]){
            count++;
        }
    }
    if(count==0){
        printf("Sorted");
    }else{
        printf("Not Sorted");
    }
}