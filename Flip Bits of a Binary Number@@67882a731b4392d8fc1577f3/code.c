// #include <stdio.h>
// #include <stdlib.h>

// // Comparison function for qsort
// int compare(const void *a, const void *b) {
//     return (*(int *)a - *(int *)b);
// }

// int binary_search(int arr[], int size, int target) {
//     int low = 0, high = size - 1;

//     while (low <= high) {
//         int mid = (low + high) / 2;

//         if (arr[mid] == target) {
//             return mid;
//         } else if (arr[mid] > target) {
//             high = mid - 1;
//         } else {
//             low = mid + 1;
//         }
//     }

//     return -1;
// }

// int main() {
//     int size;
//     printf("Enter the size of the array: ");
//     scanf("%d", &size);

//     int array[size];
//     printf("Enter %d numbers:\n", size);
//     for (int i = 0; i < size; i++) {
//         scanf("%d", &array[i]);
//     }

//     // Sort the array using qsort
//     qsort(array, size, sizeof(int), compare);

//     int number_to_find;
//     printf("Enter the number to find: ");
//     scanf("%d", &number_to_find);

//     int index = binary_search(array, size, number_to_find);

//     if (index != -1) {
//         printf("Number %d found at index %d (in sorted order).\n", number_to_find, index);
//     } else {
//         printf("Number %d not found in the list.\n", number_to_find);
//     }

//     return 0;
// }


// #include <stdio.h>

// int myPow(int base, int exp) {
//     int result = 1;
//     while (exp > 0) {
//         result *= base;
//         exp--;
//     }
//     return result;
// }

// int main() {
//     int n, t, i = 0, count = 0, sum = 0;
//     int binary[1000];
    
//     scanf("%d %d", &n, &t);
    
//     while (n > 0) {
//         binary[i] = n % 2;
//         n = n / 2;
//         i++;
//     }

//     if (binary[t] == 0) {
//         binary[t] = 1;
//     } else {
//         binary[t] = 0;
//     }

//     for (int j = 0; j < i; j++) {
//         sum += binary[j] * myPow(2, j);
//     }

//     printf("%d\n", sum);
//     return 0;
// }



// int digitRightShift(int A){
//     int array[1000],i=0,count=0;
//     while(A>0){
//         array[i]=A%10;
//         A=A/10;
//         i++;
        
//     }
//     for(int j=i;j>0;j--){
//         count+=1;
//     }
//     for(int j=0;j<count;j++){
//         return array[j] ;
//     }

// }

// int main(){
//     int b;
//     scanf("%d",&b);
//     int result = digitRightShift(b);
//     printf("%d\n",result);
//     return 0;
// }


// Your code here...
#include <stdio.h>
int myPow(int base, int exp) {
    int result = 1;
    while (exp > 0) {
        result *= base;
        exp--;
    }
    return result;
}

int main() {
    int n, i = 0,sum=0,j;
    int binary[32];

    scanf("%d", &n);

    if (n == 0) { 
        printf("%d", 1);  

        while (n > 0) {
            binary[i] = n % 2;
            n = n / 2;
            i++;
        }

        for ( j=0 ; j < i; j++) {
            if (binary[j] == 0){
                binary[j]=1;
            }
            else{
                binary[j]=0;
            }
        }
    }
    for (int k = 0; k < j; k++) {
              sum += binary[k] * myPow(2, k);  
             }
          printf("-%d\n", sum);
    return 0;
}


