class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        priority_queue<pair<int,int>>v;
        for(auto it:mp){
            v.push({it.second,it.first});
        }
        vector<int>res;
        while(k>0){
            k--;
            res.push_back(v.top().second);
            v.pop();
        }
        return res;
    }
};