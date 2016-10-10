//https://leetcode.com/problems/reverse-string/
#include <iostream>
#include <cmath>

using namespace std;

class Solution {
public:
   string reverseString(string s) {
      if (s.empty()) return s;
      size_t left = 0;
      size_t right = s.length()-1;
      string result(s);
      while (left < right) {
         char tmp = result[left];
         result[left] = result[right];
         result[right] = tmp;
         left++;
         right--;
      }
      return result;
   }
};

int main()
{
   Solution s;
   cout << s.reverseString("abc").c_str() << endl;
   return 0;
}