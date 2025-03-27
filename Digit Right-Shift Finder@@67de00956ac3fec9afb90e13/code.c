// Your code here...
int digitRightShift(int A){
    int array[10000],num,i,count=0;
    while(A>0){
        array[i]=A%10;
        i++;
        num=A/10;
    }
    for(int j=i;j>0;j--){
        count+=1;
    }
    for(int j=0;j<count;j++){
        return array[j] ;
    }
}