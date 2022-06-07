bool is(long long maxi,vector<int> &C, int B){
    int painters=1;
    long long sum=0;
    for(int i=0;i<C.size();i++){
        sum+=C[i];
        if(sum>maxi){
            painters++;
            sum=C[i];
        }
        if(painters>B)
            return false;
    }
    return true;
}
int Solution::paint(int A, int B, vector<int> &C) {
    int maxi=INT_MIN;
    long long sum=0;
    int n=C.size();
    for(int i=0;i<n;i++){
        if(C[i]>maxi)
            maxi=C[i];
        sum+=C[i];
    }
    long long start=maxi,end=sum;
    long long res=-1;
    while(start<=end){
        long long mid=start+(end-start)/2;
        if(is(mid,C,A))
        {
            res=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    res=res%10000003;
    res=res*B;
    return res%10000003;
}
