//https://leetcode.com/problems/majority-element/
#include <iostream>
#include <queue>
#include <map>

using namespace std;

class Solution {
public:
   int majorityElement(vector<int> &num) {
      map<int, int> m;

      for (vector<int>::const_iterator it = num.begin(); it != num.end(); ++it)
      {
         ++m[*it];
      }

      pair<int, int> maxEl = *m.begin();
      for (map<int, int>::const_iterator it = ++m.begin(); it != m.end(); ++it)
      {
         if (it->second > maxEl.second)
         {
            maxEl = *it;
         }
      }
      return maxEl.first;
   }
};

int main()
{
   return 0;
}