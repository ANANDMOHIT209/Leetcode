class Solution {
    bool isValid(int x,int y,int n,int m,vector<vector<int>>& grid){
        if(x>=0 && y>=0 && x<n && y<m && grid[x][y]==1){
            return true;
        }
        return false;
    }
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>>q;
        int fresh=0;
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2)
                    q.push({i,j});
                else if(grid[i][j]==1)
                    fresh++;
            }
        }
        if(fresh==0) return 0;
        
        while(!q.empty()){
            int nn=q.size();
            // \cout<<nn<<endl;
            int temp=0;
            while(nn!=0){
                pair<int,int>p=q.front();
                q.pop();
                int x1=p.first;
                int y1=p.second;
                // cout<<x<<" "<<y<<endl;
                // bool e= isValid(x+1,y,n,m,grid);
               int a[4]={1,-1,0,0};
               int b[4]={0,0,1,-1};
               for(int i=0;i<4;i++){
                   int x=a[i]+x1;
                   int y=b[i]+y1;
                   
                   if(isValid(x,y,n,m,grid)){
                       temp++;
                       grid[x][y]=2;
                       q.push({x,y});
     
                   }
               }
                nn--;
                
            }
            if(temp!=0)
                    count++;
                // temp=0; 
        }
        // cout<<count<<" ";
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         cout<<grid[i][j]<<" ";
        //     }
            // cout<<endl;
        // }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1)
                 {
                  return -1;
                 }
            }
        }
            return count;
        
    }
};