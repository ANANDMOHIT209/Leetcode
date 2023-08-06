class Solution {
public:
    int minimumSeconds(vector<int>& nums) {
        int ans = nums.size();
        int n = nums.size();
        map<int,int>last;
        for(int i=0;i<n;++i){
            nums.push_back(nums[i]);
            last[nums[i]] = -1;
        }
        n = nums.size();
        map<int,int>maxi;
        
        for(int i=0;i<n;++i){
            if(last[nums[i]] != -1){
                int tot_time = (i - last[nums[i]]);
                tot_time /= 2;
                maxi[nums[i]] = max(maxi[nums[i]],tot_time);
                
            }
            last[nums[i]] = i;
        }
        for(auto&x:maxi)ans = min(ans,x.second);
        
        return ans;
    }
};