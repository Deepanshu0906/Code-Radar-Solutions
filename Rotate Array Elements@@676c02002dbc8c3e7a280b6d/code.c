// Your code here...
#include<stdio.h>
int main(){
    int size,rotate,a;
    scanf("%d",&size);
    int ar[size],ar1[size];
    for(int i=0;i<size;i++){
        scanf("%d\n",&ar[i]);
    }
    scanf("%d",&rotate);
    for(int j=0;j<size;j++){
        a=(j+rotate)%size;
        ar1[a]=ar[j]
        
    }
    for(int j=0;j<size;j++){
        printf("%d",ar1[j]);
    }

}