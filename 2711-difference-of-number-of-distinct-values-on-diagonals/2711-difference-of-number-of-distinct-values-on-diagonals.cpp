class Solution {
public:
    vector<vector<int>> differenceOfDistinctValues(vector<vector<int>>& grid) {
        vector<vector<int>> ans(grid.size(), vector<int>(grid[0].size(), 0));
    for(int i = 0; i < grid.size(); ++i){
        for(int j = 0; j < grid[0].size(); ++j){
            int x = i+1, y = j+1, p = i -1, q = j-1;
            unordered_set<int> bottomRight, topLeft;
            while( x  < grid.size() && y < grid[0].size()) bottomRight.insert(grid[x++][y++]);
            while( p  >= 0 && q >= 0) topLeft.insert(grid[p--][q--]);
            ans[i][j] = abs((int)bottomRight.size() - (int)topLeft.size());
        }
    }
    return ans;
    }
};