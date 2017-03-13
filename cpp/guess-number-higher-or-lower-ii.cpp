// https://leetcode.com/problems/guess-number-higher-or-lower-ii/

class Solution {
public:
    int getMoneyRec(int l, int r, vector<vector<int>>& dp) {
        if (dp[l][r] > 0) return dp[l][r];

        if (r-l == 0) return 0;
        if (r-l == 1) return l;
        if (r-l == 2) return l+1;

        int cost = (r*r-l*l);
        for (int i = l+1; i<r; ++i) {
            cost = min(cost, max(getMoneyRec(l,i-1, dp) + i, getMoneyRec(i+1, r, dp) + i));
        }
        dp[l][r] = cost;
        return cost;

    }

    int getMoneyAmount(int n) {
        vector<vector<int>> dp(n+1, vector<int>(n+1));
        return getMoneyRec(1, n, dp);

    }
};