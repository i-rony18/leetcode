class Solution {
public:
    bool isvalid(char ch,vector<vector<char>>& board,int r, int c){
        for(int i=0; i<9; i++){
            if(board[r][i]==ch)return false;
            if(board[i][c]==ch)return false;
        }
        int rs = 3*(r/3);
        int cs = 3*(c/3);
        for(int i=rs; i<rs+3; i++){
            for(int j=cs; j<cs+3; j++){
                if(board[i][j]==ch)return false;
            }
        }
        return true;
    }
    bool solve(vector<vector<char>>& board){
        for(int i=0; i<9; i++){
            for(int c=0; c<9; c++){
                if(board[i][c]=='.'){
                    for(char ch='1'; ch<='9'; ch++){
                        if(isvalid(ch,board,i,c)){
                            board[i][c]=ch;
                            if(solve(board))return true;
                            else{
                                board[i][c]='.';
                            }
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};