// https://leetcode.com/problems/summary-ranges/
// time 8:08

#include "summary-ranges.h"
#include <vector>
#include <iostream>

using namespace std;

int main()
{

   std::vector<int> nums;
   int a[] = { 0,1,2,4,5,7 };
   nums.assign(a, a + 6);

   Solution s;
   // ["0->2","4->5","7"].
   for (auto a : s.summaryRanges(nums)) {
      cout << a << " ";
   }

   return 0;
}