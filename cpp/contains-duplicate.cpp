// https://leetcode.com/problems/contains-duplicate/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> m;
        
        for (auto& a: nums) {
            if (m.count(a) > 0) return true;
            m.insert(a);
            
        }
        
        return false;
        
    }
};