class Solution {
public:
    int f(int i,int j,vector<int>& cuts,vector<vector<int>>&dp){
        if(i>j) return 0;
        int mini=INT_MAX;
        if(dp[i][j]!=-1) return dp[i][j];
        for(int ind=i;ind<=j;ind++){
            int cost=cuts[j+1]-cuts[i-1] + f(i,ind-1,cuts,dp)+f(ind+1,j,cuts,dp);
            mini =min(cost,mini);
        }
        return dp[i][j]=mini;
    }
    int minCost(int n, vector<int>& cuts) {
        int s=cuts.size();
        cuts.push_back(n);
        cuts.insert(cuts.begin(),0);
        sort(cuts.begin(),cuts.end());
        vector<vector<int>>dp(s+1,vector<int>(s+1,-1));
        cout<<s<<" ";
        // return 1;
        return f(1,s,cuts,dp);

    }
};