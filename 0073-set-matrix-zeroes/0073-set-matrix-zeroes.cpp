class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
//         set<int>x;
//         set<int>y;
//         int n=matrix.size();
//         int m=matrix[0].size();
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(matrix[i][j]==0){
//                     x.insert(i);
//                     y.insert(j);
//                 }
//             }
//         }
        
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 auto it1=x.find(i);
//                 auto it2=y.find(j);
//                 if(it1!=x.end() || it2!=y.end()){
//                     matrix[i][j]=0;                   
//                 }
//             }
//         }
        int col=1;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    if(j!=0){
                        matrix[0][j]=0;
                    }
                    else{
                        col=0;
                    }
                }
            }
        }
        
        for(int i=1;i<matrix.size();i++){
            for(int j=1;j<matrix[0].size();j++){
                if(matrix[i][0]==0 || matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            }
        }
        if(matrix[0][0]==0){
          for(int j=0;j<matrix[0].size();j++)
              matrix[0][j]=0;
        }
         if(col==0){
        for(int i=0;i<matrix.size();i++){
            matrix[i][0]=0;
        }
    }
        // return matrix;
    }
   
    
};