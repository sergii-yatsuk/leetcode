// https://leetcode.com/problems/partition-equal-subset-sum

class Solution {
public:
    bool canPartition(vector<int>& nums) {
        if (nums.size()<2) return false;
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if (sum%2 == 1) return 0;
        int target = sum / 2;
        vector<int> dp(target+1);
        dp[0] = 1;
        
        for (auto&& n: nums) {
            if (dp[target-n] > 0) return true;
            for (size_t i=target; i>=n; --i) {
                dp[i] = dp[i-n];
            }
        }
        return false;
    }
};