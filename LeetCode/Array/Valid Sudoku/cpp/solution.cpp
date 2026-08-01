class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        // row wise checking
        for(int i=0; i<9; i++){
            map<int,int>mpp;
            for(int j=0; j<9; j++){
                if(board[i][j] == '.'){
                    continue;
                }
                mpp[board[i][j]]++;
                if(mpp[board[i][j]] > 1) return false;
            }
        }

        // column wise checking
        for(int i=0; i<9; i++){
            map<int,int>mpp;
            for(int j=0; j<9; j++){
                if(board[j][i] == '.'){
                    continue;
                }
                mpp[board[j][i]]++;
                if(mpp[board[j][i]] > 1) return false;
            }
        }

        // every 3x3 grid checking
        for(int row=0; row<9; row+=3){
            for(int col=0; col<9; col+=3){
                map<int,int>mpp;
                for(int i=row; i<row+3; i++){
                    for(int j=col; j<col+3; j++){
                        if(board[i][j]=='.') continue;
                        mpp[board[i][j]]++;
                        if(mpp[board[i][j]] > 1) return false;
                    }
                }
            }
        }

        return true;
    }
};