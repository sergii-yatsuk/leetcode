// https://leetcode.com/problems/continuous-subarray-sum

class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {

        size_t sz = nums.size();
        int sum = 0;
        int prevMod = 0;
        unordered_set<int> mod;
        
        for (size_t i=0; i<sz; ++i) {
            sum += nums[i];
            if (k!=0) sum = sum % k;
            
            if (mod.find(sum) != mod.end()) return true;
            mod.insert(prevMod);
            prevMod = sum;
        }

        return false;
        
    }
};