int Solution::largestRectangleArea(vector<int> &A) {
    int n=A.size();
    vector<int> left(n,-1);
    vector<int> right(n,n);
    stack<int> st;
    for(int i=0;i<n;i++){
        while(!st.empty()){
            if(A[st.top()]<A[i])
                break;
            st.pop();
        }
        left[i]=(st.empty())?-1:st.top();
        st.push(i);
    }
    stack<int> st1;
    for(int i=n-1;i>=0;i--){
        while(!st1.empty()){
            if(A[st1.top()]<A[i])
                break;
            st1.pop();
        }
        right[i]=(st1.empty())?n:st1.top();
        st1.push(i);
    }
    int res=0;
    for(int i=0;i<n;i++){
        res=max(res,(A[i]*(right[i]-left[i]-1)));
    }
    return res;
}
