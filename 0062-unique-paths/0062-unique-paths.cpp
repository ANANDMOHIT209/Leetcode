class Solution {
public:
    int f(int i,int j,vector<vector<int>>&dp){
        if(i==0 && j==0)
            return 1;
        if(i<0 || j<0)
            return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int up=f(i-1,j,dp);
        int left=f(i,j-1,dp);
        return dp[i][j]= up+left;
    }
    int uniquePaths(int m, int n) {
        // vector<vector<int>>dp(m,vector<int>(n,-1));
        // return f(m-1,n-1,dp);
//         Combanatric Solution
        int N=m+n-2;
        int r=n-1;
        double res=1;
        for(int i=1;i<=r;i++){
            res=res*(N-r+i)/i;
        }
        return (int)res;
    }
};