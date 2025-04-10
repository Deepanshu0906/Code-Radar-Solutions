// Your code here...
int fibonacciSeries1(int n){
    if(n<=0){
        return 0;
    }else if(n==1){
        return 1;
    }else{
        return fibonacciSeries1(n-1)+fibonacciSeries1(n-2);
    }

}
void fibonacciSeries(int n){
    for(i=1;i<=n;i++){
        
        printf("%d ",fibonacciSeries1(i);)
    }
}