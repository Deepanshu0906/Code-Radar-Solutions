// Your code here...
#include<stdio.h>
int main() {
    int n,i=0,count=0;
    int binary[10000];
    scanf("%d",&n);
    if(n=0){
        printf("%d",1);
    }
    else{
    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        if(binary[j]==0){
            count++;
        }
    }}
    printf("%d",count);
}