#include <stdio.h>
#include<math.h>
int main() {
    int n, t, i = 0,count=0,sum=0;
    int binary[1000];
    
    scanf("%d %d", &n, &t);
    
    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        count=count+1;
        // printf("%d\n", binary[j]);
    }
    count=count-1-t;
    // printf("%d",binary[count]);
    if(binary[count]=0){
        binary[count]=1;
        // printf("%d\n",binary[count]);
    }
    else{
        binary[count]=0;
    }
    // count=count+1+t;
    printf("%d\n",count);
    for( int k=0;k<count;k++){
        sum=sum+binary[count-1-k]*pow(2,k);
        // printf("%d",sum);
    }
    printf("%d\n",sum);
    return 0;
}
