// https://leetcode.com/problems/isomorphic-strings/

#include <iostream>
#include "isomorphic-strings.cpp"

using namespace std;

int main()
{
   Solution s;
   cout << s.isIsomorphic("esgg", "addd") << endl;
   cout << s.isIsomorphic("eggg", "addd") << endl;
   return 0;
}