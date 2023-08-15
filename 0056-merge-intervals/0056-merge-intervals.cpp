class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
        vector<vector<int>> res;
        if(in.size()==0)
            return res;
        sort(in.begin(),in.end());
        vector<int>v=in[0];
        for(auto it:in){
            if(it[0]<=v[1]){
                v[1]=max(it[1],v[1]);
            }
            else{
                res.push_back(v);
                v=it;
            }
        }
        res.push_back(v);
        return res;
    }
};