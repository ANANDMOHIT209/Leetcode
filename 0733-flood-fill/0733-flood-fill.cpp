class Solution {
public:
    void dfs(vector<vector<int>>& image,int i,int j,vector<vector<int>>& ans,int ini,int color){
        ans[i][j]=color;
        int n=image.size();
        int m=image[0].size();
        if(i-1>=0 && i-1<n && j>=0 && j<m && image[i-1][j]==ini && ans[i-1][j]!=color){
            dfs(image,i-1,j,ans,ini,color);
        }
        if(i+1>=0 && i+1<n && j>=0 && j<m && image[i+1][j]==ini && ans[i+1][j]!=color){
            dfs(image,i+1,j,ans,ini,color);
        }
        if(i>=0 && i<n && j-1>=0 && j-1<m && image[i][j-1]==ini && ans[i][j-1]!=color){
            dfs(image,i,j-1,ans,ini,color);
        }
        if(i>=0 && i<n && j+1>=0 && j+1<m && image[i][j+1]==ini && ans[i][j+1]!=color){
            dfs(image,i,j+1,ans,ini,color);
        }
        

    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>>ans=image;
        int ini=image[sr][sc];
        dfs(image,sr,sc,ans,ini,color);
        return ans;
    }
};