class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // int n=matrix.size();
        // int m=matrix[0].size();
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         if(matrix[i][j]==target)
        //             return true;
        //     }
        // }
        // return false;
        int n=matrix.size();
        int m=matrix[0].size();
        int l=0;
        int h=n*m-1;
        while(l<=h){
            int mid=(l+(h-l)/2);
            if(matrix[mid/m][mid%m]==target) return true;
            if(matrix[mid/m][mid%m]<target) l=mid+1;
            else h=mid-1;
        }
        return false;
    }
};