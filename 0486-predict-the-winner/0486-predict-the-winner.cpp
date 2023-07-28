class Solution {
public:
    int f(vector<int>&nums,int i,int j,int c){
        if(i>j) return 0;
        if(c==0){
            return max(nums[i]+f(nums,i+1,j,1),nums[j]+f(nums,i,j-1,1));
        }
        else{
            return min(f(nums,i+1,j,0),f(nums,i,j-1,0));
        }
    }
    bool PredictTheWinner(vector<int>& nums) {
        long long two=0;
        for(int i=0;i<nums.size();i++){
            two+=nums[i];
        }
        int n=nums.size();
        if(nums.size()==1) return true;
        long long one=f(nums,0,n-1,0);
        two-=one;
        return (one>=two);
    }
};