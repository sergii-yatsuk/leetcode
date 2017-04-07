// https://leetcode.com/problems/rotate-image/

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        const size_t sz = matrix.size();
        for (size_t i=0; i<sz/2; ++i) {
            for (size_t j=i; j<sz-i-1; ++j) {
                const auto tmp = matrix[i][j];
                matrix[i][j]=matrix[sz-j-1][i];
                matrix[sz-j-1][i] = matrix[sz-i-1][sz-j-1];
                matrix[sz-i-1][sz-j-1] = matrix[j][sz-i-1];
                matrix[j][sz-i-1] = tmp;
            }
        }
        
    }
};
