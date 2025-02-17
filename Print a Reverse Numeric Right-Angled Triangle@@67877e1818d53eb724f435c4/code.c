// Your code here...
// Your code here...
#include<stdio.h>
int main(){
    int number,i,j;
    scanf("%d",&number);
    for(i=number;i>0;i--){
        for(j=1;j<i+1;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}