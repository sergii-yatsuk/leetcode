// https://leetcode.com/problems/two-sum/

#include <two-sum.h>
#include <iostream>

using namespace std;

int main()
{
   Solution s;
   const int target = 9;
   std::vector<int> vec;
   int a[] = { 2, 7, 11,  15 };
   vec.assign(a, a + 4);

   for (auto a : s.twoSum(vec, target)) {
      cout << a << " ";
   }
   cout << endl;

   return 0;
}