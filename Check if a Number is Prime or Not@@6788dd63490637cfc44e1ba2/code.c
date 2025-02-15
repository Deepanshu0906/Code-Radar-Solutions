// Your code here...
#include<stdio.h>
int main(){
    int number,count;
    count=0;
    scanf("%d",&numbr);
    for(i=2;i<number;i++){
        if(number%i==0){
            count+=1;
        }
    }
    if(count==0){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
}