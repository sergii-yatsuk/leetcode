// https://leetcode.com/problems/count-numbers-with-unique-digits

class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        vector<int> dp(n+1);
        dp[0] = 1;
        dp[1] = 10;
        
        for (int i = 2; i<=n; ++i) {
            dp[i] = dp[i-1] + (dp[i-1]-dp[i-2])*(11-i);
        }
        
        return dp[n];
    }
};