// https://leetcode.com/problems/subsets/

#include <vector>
#include <iostream>
#include "subsets.h"


using namespace std;

int main()
{
   Solution s;
   std::vector<int> vec;
   int a[] = { 1, 2, 3 };
   vec.assign(a, a + 3);

   for (auto subs : s.subsets(vec)) {
      cout << "[";
      for (auto a : subs) {
         cout << a << " ";
      }

      cout << "]"<<endl;
   }
   return 0;
}