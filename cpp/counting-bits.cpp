#include <vector>

using namespace std;

class Solution {
public:
   vector<int> countBits(int num) {
      vector<int> result(num+1);
      for (size_t i = 0; i <= num; ++i) {
         result[i] = cout1Bits(i);
      }

      return result;
   }

   int cout1Bits(int n) {
      int result = 0;
      while (n > 0) {
         if (n & 1) ++result;
         n = n >> 1;
      }
      return result;
   }
};