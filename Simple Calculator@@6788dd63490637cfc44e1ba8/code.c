// Your code here...
#include<stdio.h>
int main(){
    int num1,num2;
    char operator1;
    scanf("%d %d %c",&num1,&num2,&operator1);
    switch(operator1){
        case "+":
        printf("%d",num1+num2);
        break;
        case "-":
        printf("%d",num1-num2);
        break;
        case "*":
        printf("%d",num1*num2);
        break;
        case "/":
        printf("%d",num1/num2);
        break;
    }
}