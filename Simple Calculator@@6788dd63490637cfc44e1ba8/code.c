#include<stdio.h>
int main(){
    int num1, num2;
    char operator1;
    scanf("%d %d %c", &num1, &num2, &operator1);
    switch(operator1){
        case '+':
            printf("%d\n", num1 + num2);
            break;
        case '-':
            printf("%d\n", num1 - num2);
            break;
        case '*':
            printf("%d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("%d\n", num1 / num2);
            else
                printf("error");
            break;
        default:
            printf("Error: Invalid operator\n");
            break;
    }
    return 0;
}
