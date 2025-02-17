// Your code here...
#include<stdio.h>
int main(){
    int n,p;
    scanf("%d %d",&n,&p);
    printf("%d",(n>>(p+1)<<(p+1))|(n&(1<<p)-1));
}