vector<int> Solution::solve(vector<int> &A) {
    int n=A.size();
    int i=0;
    while(i<n && A[i]<0)
        i++;
    int j=i;
    i--;
    vector<int> res(n,0);
    int c=0;
    while(i>=0 && j<n){
        if(abs(A[i]) >A[j]){
            res[c]=A[j]*A[j];
            j++;
            c++;
        }
        else{
            res[c]=A[i]*A[i];
            i--;
            c++;
        }
    }
    while(i>=0){
        res[c]=A[i]*A[i];
            i--;
            c++;
    }
    while(j<n){
        res[c]=A[j]*A[j];
            j++;
            c++;
    }
    return res;
}
