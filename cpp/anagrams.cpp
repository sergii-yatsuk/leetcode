// https://leetcode.com/problems/anagrams/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        for (string& s: strs) {
            string sorted(s);
            sort(sorted.begin(), sorted.end());
            m[sorted].push_back(s);
        }
        
        vector<vector<string>> result;
        for (auto& a : m) {
            result.push_back(a.second);
        }
        
        return result;
        
    }
};