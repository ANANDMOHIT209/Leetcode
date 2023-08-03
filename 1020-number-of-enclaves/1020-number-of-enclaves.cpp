class Solution {
public:
void dfs(int i,int j,vector<vector<int>>& vis,vector<vector<int>>& grid,int n,int m){
    vis[i][j]=1;
    int dr[4]={-1,0,1,0};
    int dc[4]={0,1,0,-1};
    for(int k=0;k<4;k++){
        int nr=i+dr[k];
        int nc=j+dc[k];
        if(nr>=0 && nc>=0 && nr<n && nc<m && !vis[nr][nc] && grid[nr][nc]==1){
            dfs(nr,nc,vis,grid,n,m);
        }
    }
}
    int numEnclaves(vector<vector<int>>& grid) {
       // int n=grid.size();
       // int m=grid[0].size();
       // vector<vector<int>>vis(n,vector<int>(m,0));
       // for(int i=0;i<m;i++){
       //     if(grid[0][i]==1 && !vis[0][i]){
       //         dfs(0,i,vis,grid,n,m);
       //     }
       //     if(grid[n-1][i]==1 && !vis[n-1][i]){
       //         dfs(n-1,i,vis,grid,n,m);
       //     }
       // } 
       // for(int i=0;i<n;i++){
       //     if(grid[i][0]==1 && !vis[i][0]){
       //         dfs(i,0,vis,grid,n,m);
       //     }
       //     if(grid[i][m-1]==1 && !vis[i][m-1]){
       //         dfs(i,m-1,vis,grid,n,m);
       //     }
       // } 
       // int res=0;
       //  for(int i=0;i<n;i++){
       //      for(int j=0;j<m;j++){
       //          if(vis[i][j]==0 && grid[i][j]==1){
       //              res++;
       //          }
       //      }
       //  }
       //  return res;
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<m;i++){
            if(grid[0][i]==1 && !vis[0][i])
                dfs(0,i,vis,grid,n,m);
            if(grid[n-1][i]==1 && !vis[n-1][i])
                dfs(n-1,i,vis,grid,n,m);
        }
        for(int i=0;i<n;i++){
            if(grid[i][0]==1 && !vis[i][0])
                dfs(i,0,vis,grid,n,m);
            if(grid[i][m-1]==1 && !vis[i][m-1])
                dfs(i,m-1,vis,grid,n,m);
        }
        int res=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]==0 && grid[i][j]==1){
                    res++;
                }
            }
        }
        return res;
    }
};