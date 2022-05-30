int Solution::maxSubArray(const vector<int> &A) {
    int res=INT_MIN;
    int sum=0;
    for(int i=0;i<A.size();i++){
        sum=sum+A[i];
        if(res<sum)
            res=sum;
        if(sum<0)
            sum=0;
    }
    return res;
}
