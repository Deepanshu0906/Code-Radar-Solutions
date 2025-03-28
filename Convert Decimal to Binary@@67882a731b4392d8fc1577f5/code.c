#include<stdio.h>
int main() {
    int n,i=0;
    int binary[10000];
    scanf("%d",&n);
    if(n==0){
        printf("%d",0);
    }
    else{
    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        printf("%d",binary[j]);
    }}
}