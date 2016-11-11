//https://leetcode.com/problems/generate-parentheses/ 
#include "generate-parentheses.h"
#include <vector>
#include <iostream>

using namespace std;

int main()
{

   Solution s;

   for (auto a : s.generateParenthesis(3)) {
      cout << a << endl;
   }

   return 0;
}