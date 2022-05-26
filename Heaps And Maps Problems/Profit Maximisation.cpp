int Solution::solve(vector<int> &A, int B) {
    priority_queue<int> max_heap;
    int n=A.size();
    for(int i=0;i<n;i++){
        max_heap.push(A[i]);
    }
    int res=0;
    while(B){
        int temp=max_heap.top();
        max_heap.pop();
        res=res+temp;
        B--;
        max_heap.push(temp-1);
    }
    return res;
}
