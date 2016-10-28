#pragma once
#include <vector>
using namespace std;
class Solution {
public:
   void moveZeroes(vector<int>& nums) {
      int sz = nums.size();
      int nonZeroIndex = 0;
      int currentIndex = 0;
      for (; currentIndex < sz; ++currentIndex) {
         if (nums[currentIndex] != 0) {
            continue;
         }
         if (nonZeroIndex < currentIndex) nonZeroIndex = currentIndex;
         while (nonZeroIndex < sz && nums[nonZeroIndex] == 0) {
            nonZeroIndex++;
         }
         if (nonZeroIndex >= sz || nums[nonZeroIndex] == 0) return; //only zeros at the end;
         swap(nums[currentIndex], nums[nonZeroIndex]);
      }
   }
};