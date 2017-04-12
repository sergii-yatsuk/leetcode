// https://leetcode.com/problems/single-element-in-a-sorted-array

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        size_t l = 0;
        size_t r = nums.size()/2;
        size_t m;
        while (l<r) {
            m = l + (r-l)/2;
            if (nums[2*m] != nums[2*m+1]) 
                r = m;
            else
                l = m+1;
        }
        return nums[2*l];        
    }
};
