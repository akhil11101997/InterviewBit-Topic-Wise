vector<vector<int> > Solution::generateMatrix(int A) {
    vector<vector<int>> res(A, vector<int> (A,0));
    int i=0,j=0,n=A,m=A;
    int c=1;
    while(i<n && j<m){
        int t=j;
        while(t<m){
            res[i][t]=c;
            t++;
            c++;
        }
        i++;
        t=i;
        while(t<n){
            res[t][m-1]=c;
            c++;
            t++;
        }
        m--;
        t=m-1;
        while(t>=j){
            res[n-1][t]=c;
            c++;
            t--;
        }
        n--;
        t=n-1;
        while(t>=i){
            res[t][j]=c;
            c++;
            t--;
        }
        j++;
    }
    return res;
}
