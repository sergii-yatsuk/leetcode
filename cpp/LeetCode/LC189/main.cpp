// https://leetcode.com/problems/rotate-array/
#include <vector>
class Solution {
public:
    void rotate(std::vector<int>& nums, int k) {
        size_t n = nums.size();
        if (n < 2)
        {
            return;
        }
        k = k % n ;
        std::vector<int> newVec(n);
        size_t j=0;
        for (size_t i = n-k; i<n; ++i, ++j) {
            newVec[j] = nums[i];
        }
        
        for (size_t i = 0; i<n-k; ++i, ++j) {
            newVec[j] = nums[i];
        }
        
        
        nums.swap(newVec);
   }
};

int main()
{
   Solution s;
   std::vector<int> vec;
   int a[] = {1, 2, 3, 4, 5};
   vec.assign(a, a + 5);
   int k = 3;
   s.rotate(vec, k);
   return 0;
}