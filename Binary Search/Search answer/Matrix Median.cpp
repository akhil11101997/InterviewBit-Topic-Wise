int count(int median,vector<vector<int>> &A){
    int count=0;
    for(int i=0;i<A.size();i++){
        int start=0,end=A[0].size()-1;
        int upper=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(A[i][mid]==median){
                upper=mid;
                start=mid+1;
            }
            else if(A[i][mid]>median){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        if(upper==-1){
            count+=start;
        }
        else{
            count+=upper+1;
        }
    }
    count=count-(A.size()*A[0].size()/2)-1;
    return count;
}
int Solution::findMedian(vector<vector<int> > &A) {
    int n=A.size(),m=A[0].size();
    int start=1,end=1000000000;
    int res=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        int coun=count(mid,A);
        if(coun==0){
            res=mid;
            end=mid-1;
        }
        else if(coun>0){
            res=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return res;
}

