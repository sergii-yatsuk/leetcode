// https://leetcode.com/problems/self-crossing/

#include <iostream>
#include <queue>
#include <map>

using namespace std;

class Solution {
public:
   bool isSelfCrossing(vector<int>& x) {
      return false;
   }
};

int main()
{
   Solution s;
   std::vector<int> vec;
   int a[] = { 1, 2, 3, 4, 5 };
   vec.assign(a, a + 5);
   cout << s.isSelfCrossing(vec);
   return 0;
}