// https://leetcode.com/problems/continuous-subarray-sum

class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int sum = 0;
        int prevRemainder = 0;
        unordered_set<int> remainders;
        
        for (auto&& a : nums) {
            sum += a;
            if (k!=0) sum = sum % k;
            
            if (remainders.find(sum) != remainders.end()) return true;
            remainders.insert(prevRemainder);
            prevRemainder = sum;
        }

        return false;
        
    }
};