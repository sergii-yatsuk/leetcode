// https://leetcode.com/problems/maximum-xor-of-two-numbers-in-an-array/

#include <vector>
#include <iostream>
#include "maximum-xor-of-two-numbers-in-an-array.h"

int main()
{
   Solution s;
   std::vector<int> vec;
   int a[] = { 3, 10, 5, 25, 2, 8 };
   vec.assign(a, a + 6);
   cout << s.findMaximumXOR(vec);
   return 0;
}