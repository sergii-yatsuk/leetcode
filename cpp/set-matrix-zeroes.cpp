// https://leetcode.com/problems/set-matrix-zeroes/

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        if (matrix.empty()) return;
        size_t row = 0;
        size_t col = 0;
        
        bool reset1stRow = false;
        bool reset1stCol = false;
        
        for (row=0;row<matrix.size();++row) {
            if (matrix[row][0] == 0) {
                reset1stCol = true;
                break;
            }
        }
        
        for (col=0; col<matrix[0].size();++col) {
            if (matrix[0][col] == 0) {
                reset1stRow = true;
                break;
            }
        }
        
        for (row=1; row<matrix.size(); ++row) {
            for (col=1; col<matrix[row].size(); ++col) {
                if (matrix[row][col] == 0) {
                    matrix[0][col] = 0;
                    matrix[row][0] = 0;
                }
            }
        }
        // not 
        
        for (row=1;row<matrix.size();++row) {
            if (matrix[row][0] == 0) {
                for (col=1; col<matrix[row].size();++col) {
                    matrix[row][col]=0;
                }
            }
        }
        
        for (col=1; col<matrix[0].size();++col) {
            if (matrix[0][col] == 0) {
                for (row=1; row<matrix.size(); ++row) {
                    matrix[row][col]=0;
                }
            }
        }
        
        
        if (reset1stRow) {
            row = 0;
            for (col=0; col<matrix[0].size(); ++col) {
                matrix[row][col]=0;
            }
        }
        
        if (reset1stCol) {
            col = 0;
            for (row=0; row<matrix.size();++row) {
                matrix[row][col]=0;
            }
        }
        
    }
};