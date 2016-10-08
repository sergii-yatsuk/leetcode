//https://leetcode.com/problems/compare-version-numbers/
#include <iostream>
#include <queue>

using namespace std;

class Solution {
public:


   typedef std::queue<unsigned int> VecInt;

   VecInt splitString(const string& str)
   {
      VecInt ret;
      const char delim = '.';
      size_t from = 0;
      size_t to = 0;
      for (to = 0; to < str.length(); ++to)
      {
         if (str[to] == delim)
         {
            ret.push(atoi(str.substr(from, to - from).c_str()));
            from = to + 1;
         }
      }
      ret.push(atoi(str.substr(from, to - from).c_str()));
      return ret;
   }

   int compareVersion(string version1, string version2) {

      VecInt v1 = splitString(version1);
      VecInt v2 = splitString(version2);

      if (v1.size() > v2.size())
      {
         size_t i = 0;
         for (i = 0; i < v1.size() - v2.size(); ++i)
         {
            v2.push(0);
         }
      }
      else if (v2.size() > v1.size())
      {
         size_t i = 0;
         for (i = 0; i < v2.size() - v1.size(); ++i)
         {
            v1.push(0);
         }
      }

      while (!v1.empty() && !v2.empty())
      {
         int i1 = v1.front();
         int i2 = v2.front();
         v1.pop();
         v2.pop();

         if (i1 > i2)
         {
            return 1;
         }
         else if (i1 < i2)
         {
            return -1;
         }
      }

      return 0;

   }


};

int main()
{
   Solution s;
   cout << s.compareVersion("1", "2");
   return 0;
}