// https://leetcode.com/problems/counting-bits/

class Solution {
public:
   vector<int> countBits(int num) {
      vector<int> result(num+1);
      int offset = 1;
      for (size_t i = 1; i <= num; ++i) {
          if (i == offset * 2) offset = offset *2;
         result[i] = result[i-offset]+1;
      }

      return result;
   }

};