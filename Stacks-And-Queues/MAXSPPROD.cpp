int Solution::maxSpecialProduct(vector<int> &A) {
    int n=A.size();
    vector<int> left(n,0);
    vector<int> right(n,0);
    stack<int> st;
    for(int i=0;i<n;i++){
        while(!st.empty()){
            if(A[st.top()]>A[i])
                break;
            st.pop();
        }
        left[i]=(st.empty())?0:st.top();
        st.push(i);
    }
    stack<int> st1;
    for(int i=n-1;i>=0;i--){
        while(!st1.empty()){
            if(A[st1.top()]>A[i])
                break;
            st1.pop();
        }
        right[i]=(st1.empty())?0:st1.top();
        st1.push(i);
    }
    long long res=0;
    for(int i=0;i<n;i++){
        res=max(res,left[i]*1LL*right[i]);
    }
    return res%1000000007;
}
