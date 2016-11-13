// https://leetcode.com/problems/subsets/


class Solution {
public:
   vector<vector<int>> subsets(vector<int>& nums) {
      vector<vector<int>> result;
      const size_t sz = nums.size();
      long long maxMask = 1 << sz;

      for (long i = 0; i < maxMask; ++i) {
         vector<int> newSubset;

         for (int j = 0; j < sz; ++j) {
            if ((i & (1 << j)) != 0) newSubset.push_back(nums[j]);
         }

         result.push_back(newSubset);
      }

      return result;
   }
};
