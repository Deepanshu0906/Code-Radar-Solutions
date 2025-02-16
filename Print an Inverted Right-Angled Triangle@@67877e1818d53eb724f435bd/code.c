// Your code here...
#include<stdio.h>
int main(){
    int row,i,j;
    scanf("%d",&row);
    for(i=0;i<row;i++){
        for(j=0;j<i+1;j++){
            printf("*");
        }
        printf("\n");
    }
}