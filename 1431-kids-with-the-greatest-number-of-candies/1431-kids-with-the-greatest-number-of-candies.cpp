class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& c, int e) {
        int maxi=*max_element(c.begin(),c.end());
        vector<bool>res;
        for(int i=0;i<c.size();i++){
            if(c[i]+e>=maxi){
                res.push_back(true);
            }
            else{
                res.push_back(false);
            }
        }
        return res;
    }
};