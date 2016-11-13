//https://leetcode.com/problems/length-of-last-word/

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

