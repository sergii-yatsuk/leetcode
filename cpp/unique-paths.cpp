// https://leetcode.com/problems/
class Solution {
public:
    int uniquePaths(int m, int n) {
        if (m==0 || n==0) return 0;
        if (m==1 || n==1) return 1;
        vector<vector<int>> grid(m+1, vector<int>(n+1,0));
        grid[0][1]=1;
        for (size_t i=1; i<=m; ++i) {
            for (size_t j=1;j<=n; ++j) {
                grid[i][j] = grid[i-1][j] + grid[i][j-1]; 
            }
        }
        return grid[m][n];
    }
};