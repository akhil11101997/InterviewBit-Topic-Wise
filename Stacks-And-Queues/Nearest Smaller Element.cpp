vector<int> Solution::prevSmaller(vector<int> &A) {
    vector<int> res(A.size(),-1);
    stack<int> st;
    for(int i=0;i<A.size();i++){
        while(!st.empty()){
            if(st.top()<A[i])
                break;
            st.pop();
        }
        res[i]=(st.empty())?-1:st.top();
        st.push(A[i]);
    }
    return res;
}
