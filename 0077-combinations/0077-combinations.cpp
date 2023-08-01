class Solution {
public:
    vector<vector<int>>res;
    void f(int i,int n,int k,vector<int>&ans){
        if(n+1==i){
            if(ans.size()==k)
                res.push_back(ans);
            return;
        }
        ans.push_back(i);
        f(i+1,n,k,ans);
        ans.pop_back();
        f(i+1,n,k,ans);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>ans;
        f(1,n,k,ans);
        return res;
    }
};