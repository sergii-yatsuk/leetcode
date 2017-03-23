// https://leetcode.com/problems/maximum-product-subarray

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int result=nums[0];
        
        int localMin = result;
        int localMax = result;
        
        
        for (size_t i=1; i<nums.size(); ++i) {
            if (nums[i]<0) {
                swap(localMin, localMax);
            }
            
            localMax = max(nums[i]*localMax, nums[i]);
            localMin = min(nums[i]*localMin, nums[i]);
            result = max(result, localMax);
        }
        return result;
    }
};