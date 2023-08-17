class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>s;
        for(int x:nums){
            s.insert(x);
        }
        int maxi=0;
        for(int x:nums){
            if(!s.count(x-1)){
                int num=x;
                int c=1;
                while(s.count(num+1)){
                    num+=1;
                    c++;
                }
                maxi=max(maxi,c);
            }
        }
        return maxi;
        
    }
};