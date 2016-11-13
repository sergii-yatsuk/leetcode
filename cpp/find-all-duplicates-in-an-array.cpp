class Solution {
public:
   vector<int> findDuplicates(vector<int>& nums) {
      vector<int> result;

      for (int i = 0; i < nums.size(); ++i) {
         bool isDuplicate = nums[abs(nums[i]) - 1] < 0;
         if (isDuplicate) {
            result.push_back(abs(nums[i]));
         }
         else {
            nums[abs(nums[i]) - 1] = -nums[abs(nums[i]) - 1];
         }

      }

      return result;
   }
};