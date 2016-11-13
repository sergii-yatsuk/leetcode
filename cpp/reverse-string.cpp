//https://leetcode.com/problems/reverse-string/

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
