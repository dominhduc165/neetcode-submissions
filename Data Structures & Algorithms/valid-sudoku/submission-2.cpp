class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> r(9);
        vector<unordered_set<char>> c(9);
        vector<unordered_set<char>> s(9);
        for(int i=0 ; i<9 ; i++){
            for(int j=0 ; j<9 ; j++){
                if(board[i][j]=='.') continue;
                
                int key= (j/3)*3 + (i/3);
                if(r[i].count(board[i][j]) || c[j].count(board[i][j]) || s[key].count(board[i][j])){
                    return false;
                }
                r[i].insert(board[i][j]);
                c[j].insert(board[i][j]);
                s[key].insert(board[i][j]);
            }
        }
        return true;
    }
};
