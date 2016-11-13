// https://leetcode.com/problems/summary-ranges/

class Solution {
public:
   vector<string> summaryRanges(vector<int>& nums) {
      vector<string> result;
      if (nums.empty()) return result;

      size_t sz = nums.size();
      size_t i=0;
      size_t j=i+1;

      while (i < sz) {
         size_t j = i + 1;
         while (j < sz && nums[j] - nums[j - 1] == 1) ++j;
         --j;

         if (i == j) result.push_back(to_string(nums[i]));
         else {
            result.push_back(to_string(nums[i]) + "->" + to_string(nums[j]));
         }
         i = j + 1;
      }
      return result;
   }
};
