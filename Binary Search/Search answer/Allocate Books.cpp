bool is(vector<int> &A, int B, long long maxi){
    int students=1;
    long long sum=0*1LL;
    for(int i=0;i<A.size();i++){
        sum+=(A[i]);
        if(sum>maxi){
            sum=A[i];
            students++;
        }
        if(students>B)
            return false;
    }
    return true;
}
int Solution::books(vector<int> &A, int B) {
    if(A.size()<B)
        return -1;
    int n=A.size();
    int maxi=INT_MIN;
    long long sum=0;
    for(int i=0;i<n;i++){
        if(A[i]>maxi)
            maxi=A[i];
        sum+=(1LL*A[i]);
    }
    long long start=maxi*1LL;
    long long end=sum;
    long long res=-1*1LL;
    while(start<=end){
        long long mid=start+(end-start)/2;
        if(is(A,B,mid)){
            res=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return res;
}
