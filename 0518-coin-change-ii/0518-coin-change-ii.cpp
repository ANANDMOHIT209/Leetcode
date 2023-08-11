class Solution {
public:
    int change(int sum, vector<int>& v) {
        int N=v.size();
        vector<vector<long long int>> dp(N,vector<long long int>(sum+1,0));
        for(int j=0;j<=sum;j++){
            if(j % v[0] == 0) dp[0][j] = 1;
        }
        for(int i=1;i<N;i++){
            for(int j=0;j<=sum;j++){
                
                long long int notpick = dp[i-1][j];
                long long int pick =0;
                if(v[i] <= j){
                    pick = dp[i][j-v[i]];
                }
                dp[i][j] = pick + notpick;
            }
        }
        return dp[N-1][sum];
    }
};