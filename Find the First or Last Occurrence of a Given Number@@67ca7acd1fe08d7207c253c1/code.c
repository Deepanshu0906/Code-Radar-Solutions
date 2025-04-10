// Your code here...
int findOccurrence(int arr[],int n,int target,char mode){
    int tar=-1;
    int tar1=-1;
    if(mode=='F'){
        for(int i =0;i<n;i++){\
            if(arr[i]==target){
                tar1=0;
                if(tar1!=tar){
                    return i; 
                }
                else{
                    return -1;
                }
                
            } 
        }
    }else{
        for(int i=n-1;i>=0;i--){
            if(arr[i]==target){
                tar1=0;
                if(tar1!=tar){
                    return i; 
                }
                else{
                    return -1;
                }
                
            }
        }
    }
}