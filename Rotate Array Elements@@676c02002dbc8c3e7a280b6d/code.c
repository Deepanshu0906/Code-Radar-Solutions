// Your code here...
#include<stdio.h>
int main(){
    int size,rotate;
    scanf("%d",&size);
    array[size],array1[size];
    for(int i=0;i<size;i++){
        scanf("%d\n",&array[i]);
    }
    scanf("%d",&rotate);
    for(int j=0;j<size;j++){
        array1[j]=array[(j+rotate)%size];
        printf("%d",array1[j]);
    }

}