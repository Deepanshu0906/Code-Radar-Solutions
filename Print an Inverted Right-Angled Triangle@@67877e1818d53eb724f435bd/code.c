// Your code here...
#include<stdio.h>
int main(){
    int row,i,j;
    scanf("%d",&row);
    for(i=0;i<row;i++){
        for(j=i;j>=0;j--){
            printf("* ");
        }
        printf("\n");
    }
}