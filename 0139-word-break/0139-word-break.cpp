class Solution {
public:
    int dp[301];
    bool f(int i,string s,set<string>&w){
        if(i==s.size()) return dp[i]=1;
        string temp;
        if(dp[i]!=-1) return dp[i];
        for(int j=i;j<s.size();j++){
            temp+=s[j];
            if(w.find(temp)!=w.end()){
                if(f(j+1,s,w)) return dp[i]=1;
            }
        }
        return dp[i]=0;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        set<string>st;
        memset(dp,-1,sizeof dp);
        for(auto it:wordDict)st.insert(it);
        return f(0,s,st);
    }
};