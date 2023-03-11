class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            int j=0;
            if(maxi>=i)
             j=i+nums[i];
            else
               return false; 
            maxi=max(j,maxi);
        }
        return true;
    }
};