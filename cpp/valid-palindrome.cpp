// https://leetcode.com/problems/valid-palindrome
class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        
        int l=0;
        int r=s.length()-1;
        
        while (l<r) {
            while (s[l]<'0' || (s[l]>'9' && s[l]<'a') || s[l]>'z')  ++l;
            while (s[r]<'0' || (s[r]>'9' && s[r]<'a') || s[r]>'z') --r;
            if (l<r && s[l]!=s[r]) return false;
            ++l;
            --r;
        }
        return true;
    }
};