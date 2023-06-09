class Solution {
public:
    bool isValid(vector < vector < char >> & board, int row, int col, char c) {
      for (int i = 0; i < 9; i++) {
        if (board[i][col] == c)
          return false;

        if (board[row][i] == c)
          return false;

        if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == c)
          return false;
      }
      return true;
    }
    bool f(vector<vector<char>>& b){
        for(int i=0;i<b.size();i++){
            for(int j=0;j<b.size();j++){
                if(b[i][j]=='.'){
                    for(char c='1';c<='9';c++){
                        if(isValid(b,i,j,c)){
                            b[i][j]=c;
                        if(f(b))
                            return true;
                        else
                            b[i][j]='.';
                    }
                }
                return false;
                }
                
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
      f(board);  
    }
};