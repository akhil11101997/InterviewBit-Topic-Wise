int Solution::nchoc(int A, vector<int> &B) {
    priority_queue<int> max_heap;
    for(int i=0;i<B.size();i++){
        max_heap.push(B[i]);
    }
    long long res=0;
    while(A){
        int temp=max_heap.top();
        max_heap.pop();
        res=res+temp;
        max_heap.push(temp/2);
        A--;
    }
    return res%1000000007;
}
