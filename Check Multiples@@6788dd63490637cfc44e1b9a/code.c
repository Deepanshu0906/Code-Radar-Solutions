// Your code here...
#include<stdio.h>
int main(){
    int a,b;    
    scanf("%d %d",&a,&b);
    float c=(a%b);
    if(c==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
}