// https://leetcode.com/problems/single-number-iii/

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int> map;
        
        for (const auto& a: nums) {
            ++map[a];
        }
        
        vector<int> result;
        
        for (const auto& a: map) {
            if (a.second == 1) result.push_back(a.first);
        }
        return result;
        
    }
};