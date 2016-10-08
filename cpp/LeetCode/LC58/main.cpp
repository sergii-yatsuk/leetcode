//https://leetcode.com/problems/length-of-last-word/
#include <iostream>

using namespace std;

class Solution {
public:
   int lengthOfLastWord(const char *s) {
      int prevLen = 0;
      int len = 0;
      while (*s != '\0')
      {
         if (*s == ' ')
         {
            prevLen = len;
            len = 0;
            while (*s == ' ')
            {
               ++s;
            }

         }
         else
         {
            ++len;
            ++s;
         }

      }
      return len != 0 ? len : prevLen;
   }
};

int main()
{
   Solution s;
   cout << s.lengthOfLastWord("Hello World");
   return 0;
}