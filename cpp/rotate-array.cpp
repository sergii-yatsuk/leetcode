// https://leetcode.com/problems/rotate-array/

class Solution {
public:
    void rotate(std::vector<int>& nums, int k) {
        size_t n = nums.size();
        if (n < 2)
        {
            return;
        }
        k = k % n ;
        std::vector<int> newVec(n);
        size_t j=0;
        for (size_t i = n-k; i<n; ++i, ++j) {
            newVec[j] = nums[i];
        }
        
        for (size_t i = 0; i<n-k; ++i, ++j) {
            newVec[j] = nums[i];
        }
        
        
        nums.swap(newVec);
   }
};
