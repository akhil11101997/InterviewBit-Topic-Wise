int Solution::sqrt(int A) {
    if(A==0)
        return 0;
    int res=-1;
    int start=1,end=A;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(mid<=A/mid){
            res=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return res;
}
