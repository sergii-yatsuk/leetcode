// https://leetcode.com/problems/shuffle-an-array/

#include "shuffle-an-array.h"
#include <vector>
#include <iostream>

int main()
{
   std::vector<int> nums;
   int a[] = { 1, 2, 3, 4 };
   nums.assign(a, a + 4);

   Solution s(nums);
   for (auto a : s.shuffle()) {
      cout << a << " ";
   }

   return 0;
}