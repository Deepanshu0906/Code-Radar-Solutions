#include <stdio.h>

int digitRightShift(int A) {
    int array[1000]; 
    int i = 0;      

    while (A > 0) {
        array[i] = A % 10;
        A = A / 10;
        i++;
    }


    return array[0];
}
