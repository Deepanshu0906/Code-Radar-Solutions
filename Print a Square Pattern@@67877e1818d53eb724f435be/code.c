// Your code here...
#include<stdio.h>
int main(){
    int row,i,j;
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        for(j=1;j<=row;j++){
            printf("* ");
        }
        printf("\n");
    }
}