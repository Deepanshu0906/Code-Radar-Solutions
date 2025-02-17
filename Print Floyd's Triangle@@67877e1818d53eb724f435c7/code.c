// Your code here...
// Your code here...
#include<stdio.h>
int main(){
    int number,i,j,k;
    scanf("%d",&number);
    for(i=0;i<number;i++){
        for(k=0,k<=number){
            k+=1;
        }
        for(j=0;j<i+1;j++){
            
            printf("%d ",k);
        }
        printf("\n");
    }
}