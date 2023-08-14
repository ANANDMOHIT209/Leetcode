class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=0;
        int ele=0;
        for(auto x:nums)
        {
            if(cnt==0){
                ele=x;
                cnt=1;
            }
            else if(ele==x){
                cnt++;
            }
            else
                cnt--;
        }
        return ele;
    }
};