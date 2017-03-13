// https://leetcode.com/problems/valid-anagram/

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> m;
        
        for (auto& c: s) {
            ++m[c];
        }
        
        for (auto& c: t) {
            --m[c];
        }
        
        for (auto& a: m) {
            if (a.second != 0) return false;
        }
        
        return true;
        
    }
};