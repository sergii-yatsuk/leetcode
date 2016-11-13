//https://leetcode.com/problems/valid-sudoku/

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        const size_t n=board.size();
        for (size_t row=0; row<n;++row) {
            unordered_set<char> used;

            for (size_t col=0; col<n; ++col) {
                if (board[row][col] != '.') {
                    if (used.count(board[row][col]) == 0)
                        used.insert(board[row][col]);
                    else
                        return false;
                }
                
            }
        }
        
        for (size_t col=0; col<n;++col) {
            unordered_set<char> used;

            for (size_t row=0; row<n; ++row) {
                if (board[row][col] != '.') {
                    if (used.count(board[row][col]) == 0)
                        used.insert(board[row][col]);
                    else
                        return false;
                }
                
            }
        }
        
        for (size_t row=1; row<n;row+=3) {
            for (size_t col=1; col<n; col+=3) {
                unordered_set<char> used;
                
                for (int i = -1; i<2; ++i) {
                    for (int j = -1; j<2; ++j) {
                        if (board[row+i][col+j] != '.') {
                            if (used.count(board[row+i][col+j]) == 0)
                                used.insert(board[row+i][col+j]);
                            else
                                return false;
                        }
                    }
                }
                
            }
        }
        
        return true;
    }

};