// Your code here...
#include<stdio.h>
int main(){
    int number,bit;
    scanf("%d %d",&number,&bit);
    printf("%d",(number<<bit)&1);
}