// Your code here...
// Your code here...
#include<stdio.h>
int main(){
    int number,i,j,k;
    scanf("%d",&number);
    for(i=0;i<number;i++){
        for(j=0;j<i+1;j++){
            for(k=0;k<j+1;k++){
                k+=k;
            printf("%d ",k);
        }}
        printf("\n");
    }
}