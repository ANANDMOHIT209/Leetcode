class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<pair<int,int>>v;
        for(auto it:mp){
            v.push_back({it.second,it.first});
        }
        sort(v.begin(),v.end());
        int i=v.size()-1;
        vector<int>res;
        while(k>0){
            k--;
            res.push_back(v[i].second);
            i--;
        }
        return res;
    }
};