// https://leetcode.com/problems/longest-palindrome/

class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> m(256);
        for (auto& a: s) {
            ++m[int(a)];
        }
        int result = 0;
        bool hasOdd = false;
        for (auto& a: m) {
            if (!hasOdd && a%2==1) hasOdd=true;
            result += a/2;
        }
        
        result *=2;
        if (hasOdd) ++result;
        
        return result;
    }
};