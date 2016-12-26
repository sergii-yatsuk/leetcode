// https://leetcode.com/problems/range-sum-query-2d-immutable/

class NumMatrix {
public:
    NumMatrix(vector<vector<int>> &matrix) {
        int rows = matrix.size();
        if (rows > 0 ) {
            int cols = matrix[0].size();
            sums = vector<vector<int>>(rows, vector<int>(cols));
            
            sums[0][0] = matrix[0][0];
            
            for (int col = 1; col<cols; ++col) {
                sums[0][col] = sums[0][col-1]+matrix[0][col];
            }
            
            for (int row = 1; row<rows; ++row) {
                sums[row][0] = sums[row-1][0]+matrix[row][0];
            }
             
            for (int row = 1; row<rows; ++row) {
                for (int col = 1; col<cols; ++col) {
                    sums[row][col] = matrix[row][col] + sums[row-1][col]+ sums[row][col-1] - sums[row-1][col-1];
                }
            }
        }

    }

    int sumRegion(int row1, int col1, int row2, int col2) {
        int result =  sums[row2][col2];
        
        
        if (row1>0) {
            result -= sums[row1-1][col2];
        }
        
        if (col1>0) {
            result -= sums[row2][col1-1];
        }
        
        if (col1>0 && row1>0) {
            result += sums[row1-1][col1-1];
        }

        return result;
        
    }
private:
    vector<vector<int>> sums;
};


// Your NumMatrix object will be instantiated and called as such:
// NumMatrix numMatrix(matrix);
// numMatrix.sumRegion(0, 1, 2, 3);
// numMatrix.sumRegion(1, 2, 3, 4);