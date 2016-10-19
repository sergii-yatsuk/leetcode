#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
   int maxRotateFunction(vector<int>& A) {
      int sum = 0;
      int result = 0;
      for (size_t i=0; i < A.size(); ++i) {
         result += i*A[i];
         sum += A[i];
      }

      int fi = result;
      for (size_t i = 1; i <= A.size(); ++i) {
         fi = fi + sum - A.size()*A[A.size() - i];
         result = max(fi, result);
      }
      return result;
   }
};