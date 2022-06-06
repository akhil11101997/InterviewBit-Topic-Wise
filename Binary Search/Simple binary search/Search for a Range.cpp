vector<int> Solution::searchRange(const vector<int> &A, int B) {
    int first=-1;
    int start=0,end=A.size()-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(A[mid]==B){
            first=mid;
            end=mid-1;
        }
        else if(A[mid]>B){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    start=0,end=A.size()-1;
    int last=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(A[mid]==B){
            last=mid;
            start=mid+1;
        }
        else if(A[mid]>B){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    vector<int>res;
    res.push_back(first);
    res.push_back(last);
    return res;
}
