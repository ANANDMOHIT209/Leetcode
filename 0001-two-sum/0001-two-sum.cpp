class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        
        vector<pair<int,int>>p;
        for(int i=0;i<nums.size();i++){
            p.push_back({nums[i],i});
        }
        sort(p.begin(),p.end());
        int f=0;
        int l=p.size()-1;
        
        while(f<l){
            int sum=0;
            sum=p[f].first+p[l].first;
            // cout<<sum<<" ";
            if(sum==t){
                return {p[f].second,p[l].second};
            }
            if(sum>t)
                l--;
            if(sum<t)
                f++;
        }
        return {};
    }
};