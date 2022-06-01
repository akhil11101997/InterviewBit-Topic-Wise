int Solution::solve(vector<int> &A) {
    int maxi=A[0],mini=A[0];
    for(int i=1;i<A.size();i++){
        if(A[i]>maxi)
            maxi=A[i];
        else{
            if(mini>A[i])
                mini=A[i];
        }
    }
    return maxi+mini;
}
