//https://leetcode.com/problems/counting-bits/
#include <iostream>

#include "counting-bits.h"

using namespace std;


int main()
{
   Solution s;
   cout << s.cout1Bits(0) << endl;
   cout << s.cout1Bits(1) << endl;
   cout << s.cout1Bits(2) << endl;
   cout << s.cout1Bits(3) << endl;
   vector<int> vec = s.countBits(5);
   
   for (auto i : vec) {
      cout << i << " ";
   }
   cout << endl;
   return 0;
}