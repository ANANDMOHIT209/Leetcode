class Solution {
public:
    int maxProfit(vector<int>& p) {
        int mini=INT_MAX;
        int pro=0;
        for(int i=0;i<p.size();i++){
            mini=min(mini,p[i]);
            int x=p[i]-mini;
            pro=max(x,pro);
        }
        return pro;
    }
};