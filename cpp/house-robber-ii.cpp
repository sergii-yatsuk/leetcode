// https://leetcode.com/problems/house-robber-ii/

class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        if (nums.size() == 1) return nums[0];
        if (nums.size() == 2) return max(nums[0], nums[1]);
        
        vector<int> money(nums.size());
        money[0] = nums[0];
        money[1] = max(nums[0], nums[1]);
        
        for (int k=2; k<nums.size()-1; ++k)  {
            money[k] = max(money[k-2]+nums[k], money[k-1]);
        }
        

        int max1 = money[nums.size()-2];
        
        money[0] = 0;
        money[1] = nums[1];
        
        for (int k=2; k<nums.size(); ++k)  {
            money[k] = max(money[k-2]+nums[k], money[k-1]);
        }
        
        int max2 = money[nums.size()-1];
        
        return max(max1, max2);
        
    }
};