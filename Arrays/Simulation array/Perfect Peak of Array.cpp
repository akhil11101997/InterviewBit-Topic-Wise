int Solution::perfectPeak(vector<int> &A) {
    int n=A.size();
    vector<int> left(n,0),right(n,0);
    int maxi=A[0];
    for(int i=1;i<n;i++){
        left[i]=maxi;
        maxi=max(maxi,A[i]);
    }
    maxi=A[n-1];
    for(int i=n-2;i>=0;i--){
        right[i]=maxi;
        maxi=min(maxi,A[i]);
    }
    for(int i=1;i<n-1;i++){
        if(left[i]<A[i] && right[i]>A[i])
            return 1;
    }
    return 0;
}
