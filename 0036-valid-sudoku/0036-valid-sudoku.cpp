class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //row
        for(int i=0;i<9;i++){
            vector<int>check(9,0);
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    int index=board[i][j]-'1';
                    if(check[index]!=0)return false;
                    check[index]=1;
                }
            }
        }

        //col
        for(int j=0;j<9;j++){
            vector<int>check(9,0);
            for(int i=0;i<9;i++){
                if(board[i][j]!='.'){
                    int index=board[i][j]-'1';
                    if(check[index]!=0)return false;
                    check[index]=1;
                }
            }
        }

        //box 3*3
        for(int row=0;row<9;row+=3){
            for(int col=0;col<9;col+=3){
                vector<int>check(9,0);
                for(int i=row;i<row+3;i++){
                    for(int j=col;j<col+3;j++){
                        if(board[i][j]!='.'){
                            int index=board[i][j]-'1';
                            if(check[index]!=0)return false;
                            check[index]=1;
                        }
                    }
                }
            }
        }
        return true;
    }
};