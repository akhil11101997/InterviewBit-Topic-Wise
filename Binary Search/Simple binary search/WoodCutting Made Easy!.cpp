bool is(int height,vector<int> A, int B){
    int sum=0;
    for(int i=0;i<A.size();i++){
        if(A[i]>height)
            sum+=(A[i]-height);
        if(sum>=B)
            return true;
    }
    return false;
}
int Solution::solve(vector<int> &A, int B) {
    int n=A.size();
    int maxi=INT_MIN;
    for(int i=0;i<n;i++)
        if(maxi<A[i])
            maxi=A[i];
    int start=0,end=maxi;
    int res=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(is(mid,A,B))
        {
            res=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return res;
}
