int Solution::solve(vector<int> &A, int B) {
    int res=-1;
    int start=0,end=A.size()-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(A[mid]<=B){
            res=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return res+1;
    

}
