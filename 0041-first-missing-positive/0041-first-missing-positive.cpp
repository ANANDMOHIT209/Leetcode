class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // bool flag=false;
        // int k=1;
        // for(int i=0;i<nums.size();i++){
        //     if(flag==false && nums[i]>0){
        //         flag=true;
        //         if(nums[i]==1){
        //             k++;
        //         }
        //         else{
        //             return k;
        //         }
        //     }
        //     else if(flag==true){
        //         if(nums[i]==k){
        //             k++;
        //         }
        //         else{
        //             break;
        //         }
        //     }
        // }
        // return k;
        set<int>s;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0)
            s.insert(nums[i]);
        }
        int k=1;
        for(auto it:s){
            if(k==it){
                k++;
            }
            else{
                break;
            }
        }
        return k;
    }
};