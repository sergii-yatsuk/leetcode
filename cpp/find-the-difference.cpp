class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> used;
        
        for (auto& a: s) {
            ++used[a];
        }
        
        for (auto& a: t) {
            if (used[a]==0) return a;
            else --used[a];
        }
        
        return '\0';
    }
};