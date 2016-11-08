// https://leetcode.com/problems/intersection-of-two-arrays/

#include "intersection-of-two-arrays.h"
#include <iostream>

int main()
{
   Solution s;
   std::vector<int> nums1;
   int a[] = { 1, 2, 2, 1 };
   nums1.assign(a, a + 4);

   std::vector<int> nums2;
   int b[] = { 2, 2};
   nums2.assign(b, b + 2);

   for (auto a : s.intersection(nums1, nums2)) {
      cout << a << " ";
   }

   return 0;
}