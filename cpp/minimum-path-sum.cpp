// https://leetcode.com/problems/minimum-path-sum

class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
       if (grid.empty()) return 0;
       if (grid[0].empty()) return 0;
       size_t m = grid.size();
       size_t n = grid[0].size();
       vector<vector<int>> dp(m, vector<int>(n));
       
       for (size_t row=0; row<m; ++row) {
           for(size_t col=0; col<n; ++col) {
               int price=grid[row][col];
               
               if (row==0 && col==0) {
                   // just skip
               }
               else if (row==0 && col!=0) {
                   price += dp[row][col-1];
               }
               else if (col==0 && row!=0) {
                   price += dp[row-1][col];
               }
               else {
                   price += min(dp[row][col-1], dp[row-1][col]);
               }
               dp[row][col] = price;
           }
       }
       return dp[m-1][n-1];
    }
};