// https://leetcode.com/problems/maximum-subarray

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if (nums.size()==0) return 0;
        if (nums.size()==1) return nums[0];
        vector<int> sum(nums.size());
        sum[0]=nums[0];

        for (int i=1; i<nums.size(); ++i)
            sum[i] = max(sum[i-1]+nums[i], nums[i]);

        int result = sum[0];
        for(auto&& a: sum) {
            result = max(result, a);
        }

        return result;
    }
};
