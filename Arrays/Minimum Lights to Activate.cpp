int Solution::solve(vector<int> &A, int B) {
    int i=0;
    int starts=-1;
    while(i<B){
        if(A[i]==1)
            starts=i;
        i++;    
    }
    if(starts==-1)
        return -1;
    int res=1;
    while(starts<A.size()-1){
        if(starts+B>=A.size())
            return res;
        int m=starts+2*B-1;
        int j=starts+1;
        while(j<=m){
            if(A[j]==1)
                starts=j;
            j++;    
        }
        if(starts==m-2*B+1)
            return -1;
        res++;    
    }
    return res;
}
