// https://leetcode.com/problems/rotate-function/
#include <iostream>
#include "rotate-function.h"

int main()
{
   Solution s;
   std::vector<int> vec;
   int a[] = { 4, 3, 2, 6};
   vec.assign(a, a + 4);
   cout << s.maxRotateFunction(vec);
   return 0;
}