class Solution {
public:
    int f(int i,int j,vector<int>& s,vector<vector<int>>&dp){
        if(i<0){
            return 0;
        }
        if(dp[i][j]!=-1) return dp[i][j];
        int nt=0+f(i-1,j,s,dp);
        int t=s[i]*j+f(i-1,j+1,s,dp);
        
        return  dp[i][j]=max(nt,t);
    }
    int maxSatisfaction(vector<int>& s) {
        sort(s.begin(),s.end(),greater<int>());
        int n=s.size();
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        return f(n-1,1,s,dp);
        
    }
};