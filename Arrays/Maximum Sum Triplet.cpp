int Solution::solve(vector<int> &A) {
    int maxi=-1;
    int n=A.size();
    vector<int> rightMax(n,-1);
    set<int>s;
    for(int i=n-1;i>=0;i--){
        rightMax[i]=maxi;
        maxi=max(maxi,A[i]);
    }
    int res=0;
    s.insert(INT_MIN);
    for(int i=0;i<n;i++){
        auto it=s.lower_bound(A[i]);
        it--;
        if(rightMax[i]>A[i])
            res=max(res,A[i]+*it+rightMax[i]);
        s.insert(A[i]);
    }
    return res;
}
