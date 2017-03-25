// https://leetcode.com/problems/maximum-product-subarray

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int result=nums[0];
        vector<int> localMin(nums.size());
        vector<int> localMax(nums.size());
        localMin[0] = nums[0];
        localMax[0] = nums[0];
        for (size_t i=1; i<nums.size(); ++i) {
            localMax[i] = max(max(nums[i]*localMax[i-1], nums[i]*localMin[i-1]), nums[i]);
            localMin[i] = min(min(nums[i]*localMax[i-1], nums[i]*localMin[i-1]), nums[i]);
            result = max(result, localMax[i]);
        }
        return result;
    }
};