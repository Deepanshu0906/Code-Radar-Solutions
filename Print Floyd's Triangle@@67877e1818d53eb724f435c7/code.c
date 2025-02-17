// Your code here...
// Your code here...
#include<stdio.h>
int main(){
    int number,i,j,k;
    scanf("%d",&number);
    for(i=0;i<number;i++){
        for(j=0;j<i+1;j++){
            for(k=1;k<j;k++){
                k+=1;
            printf("%d",k);
        }}
        printf("\n");
    }
}