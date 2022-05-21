int Solution::trap(const vector<int> &A) {
    int n=A.size();
    vector<int>left(n,-1);
    vector<int>right(n,-1);
    stack<int>st;
    for(int i=0;i<n;i++){
        while(!st.empty()){
            if(st.top()>A[i])
                break;
            st.pop();    
        }
        left[i]=(st.empty())?-1:st.top();
        if(st.empty())
            st.push(A[i]);
    }
    stack<int>st1;
    for(int i=n-1;i>=0;i--){
        while(!st1.empty()){
            if(st1.top()>A[i])
                break;
            st1.pop();
        }
        right[i]=(st1.empty())?-1:st1.top();
        if(st1.empty())
            st1.push(A[i]);
    }
    int res=0;
    for(int i=0;i<n;i++){
        if(left[i]!=-1 && right[i]!=-1){
            res=res+(min(right[i],left[i])-A[i]);
        }
    }
    return res;
}
