// // // // #include <stdio.h>

// // // // void printBinary(int num) {
// // // //     unsigned int mask = 1 << (sizeof(int) * 8 - 1); // Create a mask with the highest bit set
// // // //     int binary[32];
// // // //     int index = 0;

// // // //     do {
// // // //         binary[index] = (num & mask) ? 1 : 0;
// // // //         num <<= 1;
// // // //         index++;
// // // //     } while (index < sizeof(int) * 8);

// // // //     printf("Binary representation: ");
// // // //     for (int i = 0; i < index; i++) {
// // // //         printf("%d", binary[i]);
// // // //     }
// // // //     printf("\n");
// // // // }

// // // // int main() {
// // // //     int num;
// // // //     printf("Enter a number: ");
// // // //     scanf("%d", &num);

// // // //     printBinary(num);

// // // //     return 0;
// // // // }

// // // #include <stdio.h>
// // // int main(){
// // //     int age,weight;
// // //     printf("Enter your age: ");
// // //     scanf("%d",&age);
// // //     printf("Enter your weight: ");
// // //     scanf("%d",&weight);
// // //     if (age>18 && weight>50){
// // //         printf("You are eligible to donate blood");
// // //     }
// // //     else{
// // //         printf("You are not eligible to donate blood");
// // //     }
// // //     return 0;
// // //     // printf("hello wo

// // #include <stdio.h>
// // void main(){
// //     int num=0;
// //     if (num==0){
// //         printf("Number is 0");
// //         // break;
// //     }
// //     printf("Hello world");
// // }

// // pattern
// // #include <stdio.h>
// // int main(){
// //     int n;
// //     printf("Enter the number of rows: ");
// //     scanf("%d",&n);
// //     for (int i = 1; i <= n; i++)
// //     {
// //         for (int j = 1; j <= i; j++)
// //         {
// //             printf("*\t");
// //         }
// //         printf("\n\n");
// //     }
// //      return 0;
// // }



// // #include <stdio.h>
// // int main(){
// //     int n;
// //     printf("Enter the number of rows: ");
// //     scanf("%d", &n);
// //     for (int i = n; i >= 1; i--)
// //     {
// //         for (int j = 1; j <= i; j++)
// //         {
// //             printf("*\t");
// //         }
// //         printf("\n\n");
// //     }
// //     return 0;
// // }

// #include <stdio.h>

// int main() {
//     int n = 10;  
//     printf("    ");
//     for (int i = 1; i <= n; i++) {
//         printf("%4d", i);
//     }
//     printf("\n");


//     for (int i = 1; i <= n; i++) {
//         printf("%4d", i); 
//         for (int j = 1; j <= n; j++) {
//             printf("%4d", i * j);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// Your code here...
#include<stdio.h>
int main(){
    int num1,num2;
    char operator1;
    scanf("%d %d %c",&num1,&num2,&operator1);
    switch(operator1){
        case '+':
        printf("%d",num1+num2);
        break;
        case '-':
        printf("%d",num1-num2);
        break;
        case '*':
        printf("%d",num1*num2);
        break;
        case '/':
        printf("%d",num1/num2);
        break;
    }
}