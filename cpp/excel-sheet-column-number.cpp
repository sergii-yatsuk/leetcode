//https://leetcode.com/problems/excel-sheet-column-number/

class Solution {
public:
   int titleToNumber(string s) {
      int ret = 0;
      size_t len = s.length();
      for (int i = len - 1; i >= 0; --i)
      {
         if ('A' <= s[i] && s[i] <= 'Z')
         {
            ret = ret + (s[i] - 'A' + 1) * int((pow(26, (len - i - 1))));
         }
         else
         {
            return 0;
         }

      }
      return ret;
   }
};
