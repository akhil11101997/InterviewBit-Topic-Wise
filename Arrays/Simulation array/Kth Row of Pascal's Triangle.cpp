vector<int> Solution::getRow(int A) {
    vector<int> temp={1};
    if(A==0)
        return temp;
    while(A){
        vector<int> res;
        res.push_back(temp[0]);
        for(int i=0;i<temp.size()-1;i++){
            res.push_back(temp[i]+temp[i+1]);
        }
        res.push_back(temp[temp.size()-1]);
        temp=res;
        A--;
    }
    return temp;
}
