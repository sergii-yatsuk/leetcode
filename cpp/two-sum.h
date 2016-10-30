#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
   vector<int> twoSum(vector<int>& nums, int target) {
      vector<int> result;

      unordered_map<int, int> m;

      for (int i = 0; i < nums.size(); ++i) {
         m[nums[i]] = i;
      }

      for (int i = 0; i < nums.size(); ++i) {
         int a = nums[i];
         int b = target - nums[i];

         auto it = m.find(b);
         if (it != m.end() && it->second != i) {
            result.push_back(i);
            result.push_back(it->second);
            return result;
         }
      }


      return result;
   }
};
