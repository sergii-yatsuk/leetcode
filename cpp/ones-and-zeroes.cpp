// https://leetcode.com/problems/ones-and-zeroes/

class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<vector<int>> dp(m+1, vector<int>(n+1));
        for (const auto& a: strs) {
            const int m_k = count(a.begin(), a.end(), '0');
            const int n_k = count(a.begin(), a.end(), '1');
            
            for (int m_i = m; m_i>=m_k; --m_i) {
                for (int n_i = n; n_i>=n_k; --n_i) {
                    dp[m_i][n_i] = max(dp[m_i-m_k][n_i-n_k]+1, dp[m_i][n_i]);
                }
            }
        }
        return dp[m][n];
    }
};