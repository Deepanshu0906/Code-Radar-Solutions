// Your code here...
void printPrimesInRange(int a,int b){
    int count=0;
    for(int i=a;i<=b;i++){
        for(int j=2;j<a;j++){
            if(i%j==0 ){
                count+=1;
            }
        }
        if(count==0){
            printf("%d ",a);
        }
    }
}