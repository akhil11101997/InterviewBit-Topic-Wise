int Solution::solve(vector<int> &A, int B) {
    int n=A.size();
    int sum=0;
    for(int i=0;i<B;i++)
        sum=sum+A[i];
    int i=B-1,j=n-1;
    int res=INT_MIN;
    while(i>=0){
        res=max(res,sum);
        sum=sum-A[i]+A[j];
        i--;
        j--;
    }
    res=max(res,sum);
    return res;
}
