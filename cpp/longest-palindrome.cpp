// https://leetcode.com/problems/longest-palindrome/

class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> m;
        for (auto& a: s) {
            ++m[a];
        }
        int result = 0;
        bool hasOdd = false;
        for (auto& a: m) {
            int i = a.second;
            if (!hasOdd && i%2==1) hasOdd=true;
            result += i/2;
        }
        
        result *=2;
        if (hasOdd) ++result;
        
        return result;
    }
};