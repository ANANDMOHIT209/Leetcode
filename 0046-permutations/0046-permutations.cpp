class Solution {
public:
    void f(vector<vector<int>>&res,vector<int>& nums,vector<int>& vis,vector<int>& temp){
        if(temp.size()==nums.size()){
            res.push_back(temp);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(vis[i]==0){
                vis[i]=1;
                temp.push_back(nums[i]);
                f(res,nums,vis,temp);
                temp.pop_back();
                vis[i]=0;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> vis(nums.size(),0);
        vector<int> temp;
        f(res,nums,vis,temp);
        return res;
    }
};