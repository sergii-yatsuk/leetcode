// https://leetcode.com/problems/target-sum/

class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int s) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if (s>sum || s < -sum || (s+sum)%2 == 1) return 0;
        
        
        s = (s+sum)/2;
        vector<int> dp(s+1);
        dp[0] = 1;
        for (auto&& n : nums ) {
            for (size_t i = s; i >= n; i--) {
                dp[i] += dp[i - n];       
            }
        }
        return dp[s];
        
    }
};