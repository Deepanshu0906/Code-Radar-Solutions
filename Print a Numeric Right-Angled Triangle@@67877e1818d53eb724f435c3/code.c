// Your code here...
// Your code here...
#include<stdio.h>
int main(){
    int number,i,j;
    scanf("%d",&number);
    for(i=0;i<number;i++){
        for(j=0;j<i+1;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}