// Your code here...
#include<stdio.h>
int main(){
    int number;
    scanf("%d",&number);
    if(1<=number && number<=100){
        printf("In Range");
    }
    else{
        printf("Out of Range");
    }
}