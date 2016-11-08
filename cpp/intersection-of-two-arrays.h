// https://leetcode.com/problems/intersection-of-two-arrays/

#include <vector>
#include <set>
#include <unordered_set>

using namespace std;

class Solution {
public:
   vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
      set<int> result;

      unordered_set<int> n;

      for (auto a : nums1) {
         n.insert(a);
      }

      for (auto a : nums2) {
         if (n.find(a) != n.end()) result.insert(a);
      }


      return vector<int>(result.begin(), result.end());
   }
};