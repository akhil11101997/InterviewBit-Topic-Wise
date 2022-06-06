int Solution::solve(vector<int> &A, int B) {
    int start=0,end=A.size()-1;
    int pivot=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(mid-1>=0 && mid+1<A.size() && A[mid-1]<A[mid] && A[mid]>A[mid+1])
        {
            pivot=mid;
            break;
        }
        else if(mid-1<0){
            if(A[mid]>A[mid+1])
            {
                pivot=mid;
                break;
            }
            else{
                start=mid+1;
            }
        }
        else if(mid+1>=A.size()){
            if(A[mid-1]<A[mid])
            {
                pivot=mid;
                break;
            }
            else{
                end=mid-1;
            }
        }
        else if(A[mid-1]>A[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    start=0,end=pivot;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(A[mid]==B)
            return mid;
        else if(A[mid]>B){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    start=pivot+1,end=A.size()-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(A[mid]==B)
            return mid;
        else if(A[mid]>B){
             start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;

}
