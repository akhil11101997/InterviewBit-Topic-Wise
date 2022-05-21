int Solution::evalRPN(vector<string> &A) {
    stack<int> st;
    for(int i=0;i<A.size();i++){
        if(A[i]=="+"){
            int op2=st.top();
            st.pop();
            int op1=st.top();
            st.pop();
            st.push(op1+op2);
        }
        else if(A[i]=="-"){
            int op2=st.top();
            st.pop();
            int op1=st.top();
            st.pop();
            st.push(op1-op2);
        }
        else if(A[i]=="/"){
            int op2=st.top();
            st.pop();
            int op1=st.top();
            st.pop();
            st.push(op1/op2);
        }
        else if(A[i]=="*"){
            int op2=st.top();
            st.pop();
            int op1=st.top();
            st.pop();
            st.push(op1*op2);
        }
        else{
            st.push(stoi(A[i]));
        }
    }
    return st.top();
}
