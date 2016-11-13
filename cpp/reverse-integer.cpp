//https://leetcode.com/problems/reverse-integer/

class Solution {
public:
   int reverse(int x) {
      if (x == 0)
      {
         return x;
      }
      int ret = 0;
      int sig = x / abs(x);
      int d = 0;

      x = abs(x);
      while (x > 0)
      {

         d = x % 10;
         x = x / 10;

         if ((INT_MAX - d) / 10 < ret)
         {
            return 0;
         }

         ret = ret * 10 + d;

      }

      return ret * sig;
   }
};

