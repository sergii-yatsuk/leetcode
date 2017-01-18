// https://leetcode.com/problems/battleships-in-a-board/

class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        const int row = board.size();
        if (rows<1) return 0;
        const int cols = board[0].size();       
        int res =0;
        for (int row =0; row<rows; ++row) {
            for (int col =0; col<cols; ++col) {
                if (board[row][col] == 'X') {
                    if ((row==0 || board[row-1][col] != 'X') && (col==0 || board[row][col-1] != 'X'))
                        ++res;
                }
            }
        }

        return res;

    }
};