// Your code here...
#include<stdio.h>
int main(){
    int cost,profit;
    scanf("%d %d",&cost,&profit);
    if (cost<profit){
        printf("Profit");
    }
    else if(cost==profit){
        printf("No Loss");
    }
    else{
        printf("Loss");
    }
}