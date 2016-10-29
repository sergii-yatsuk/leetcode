// https://leetcode.com/problems/find-all-duplicates-in-an-array/

#include <vector>
#include <iostream>
#include "find-all-duplicates-in-an-array.h"
using namespace std;

int main()
{
   std::vector<int> vec;
   int a[] = { 4,3,2,7,8,2,3,1 };
   vec.assign(a, a + 8);
   Solution s;

   for (auto a : s.findDuplicates(vec)) {
      cout << a << " ";
   }
   cout << endl;

}