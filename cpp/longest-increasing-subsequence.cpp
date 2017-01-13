// https://leetcode.com/problems/longest-increasing-subsequence/

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        if (nums.size() == 1) return 1;
        vector<int> dp(nums.size(), 1);
        
        for (int i=1; i<nums.size(); ++i) {
            for (int j=0; j<i; ++j) {
                if (nums[i]>nums[j])
                    dp[i] = max(dp[i], dp[j]+1);
            }
        }
        
        int m=1;
        
        for (int i=0; i<dp.size(); ++i) {
            m=max(m, dp[i]);
        }
        
        return m;
    }

};