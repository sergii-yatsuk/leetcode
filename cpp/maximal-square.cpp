// https://leetcode.com/problems/maximal-square

class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        if (matrix.size() == 0) return 0;
        vector<vector<int>> result(matrix.size(), vector<int>(matrix[0].size()));
        int maxSz=0;
        
        for (size_t col=0; col<matrix[0].size(); ++col)
        {
            result[0][col] = matrix[0][col]-'0';
            maxSz = max(maxSz, result[0][col]);
        }
            
            
        for (size_t row=0; row<matrix.size(); ++row) {
            result[row][0] = matrix[row][0] -'0';
            maxSz = max(maxSz, result[row][0]);
        }
        
        for (size_t row=1; row<matrix.size(); ++row) {
            for (size_t col=1; col<matrix[row].size(); ++col) {
                if (matrix[row][col]=='1') {
                    result[row][col] = min(result[row-1][col-1], min(result[row-1][col], result[row][col-1]))+1;
                    maxSz = max(maxSz, result[row][col]);
                }
                
                
            }
        }
        
        return maxSz*maxSz;
        
    }
};