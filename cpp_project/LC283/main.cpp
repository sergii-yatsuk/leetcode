//https://leetcode.com/problems/move-zeroes/
#include <iostream>
#include <vector>
#include "move-zeroes.h"

using namespace std;


int main()
{
   Solution s;
   std::vector<int> vec;
   int a[] = {1,0,1};
   //int a[] = { 1, 2, 3, 4, 5 };
   vec.assign(a, a + 3);
   s.moveZeroes(vec);

   for (auto a : vec) {
      cout << a << " ";
   }
   cout << endl;
   return 0;
}