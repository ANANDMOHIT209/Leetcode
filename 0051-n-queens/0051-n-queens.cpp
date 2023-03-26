class Solution {
public:
    vector<vector<string>> res;
    bool safe(int i,int j,vector<string>b,int n){
        int row=i;
        int col=j;
        while(i>=0 && j>=0){
            if(b[i][j]=='Q') return false;
            i--;
            j--;
        }
        i=row;
        j=col;
        while(i>=0 && j>=0){
            if(b[i][j]=='Q') return false;
            j--;
        }
        i=row;
        j=col;
        while(i<n && j>=0){
            if(b[i][j]=='Q') return false;
            j--;
            i++;
        }
        return true;
    }
    
    void f(int j,vector<string> b,int n){
        if(j==n){
            res.push_back(b);
            return;
        }
        for(int i=0;i<n;i++){
            if(safe(i,j,b,n)){
                b[i][j]='Q';
                f(j+1,b,n);
                b[i][j]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> b(n);
        string s(n, '.');
        for (int i = 0; i < n; i++) {
          b[i] = s;
        }
        f(0,b,n);
        return res;
    }
};