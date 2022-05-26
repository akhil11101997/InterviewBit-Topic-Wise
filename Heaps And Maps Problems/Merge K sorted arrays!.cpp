vector<int> Solution::solve(vector<vector<int> > &A) {
    int n=A.size(),m=A[0].size();
    priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> min_heap;
    for(int i=0;i<n;i++){
        pair<int,int> temp=make_pair(i,1);
        min_heap.push(make_pair(A[i][0],temp));
    }
    vector<int>res(n*m,0);
    int i=0;
    while(min_heap.size()){
        pair<int,pair<int,int>> temp=min_heap.top();
        min_heap.pop();
        res[i]=temp.first;
        i++;
        if(temp.second.second<m){
            temp.first=A[temp.second.first][temp.second.second];
            temp.second.second++;
            min_heap.push(temp);
        }
    }
    return res;
}
