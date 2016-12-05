// https://leetcode.com/problems/longest-palindromic-substring/

class Solution {
public:
    // babad
    // dabab
    string longestPalindrome(string s) {
        if (s.length()<2) return s;
        string r(s);
        reverse(r.begin(), r.end());
        
        vector<vector<int>> matches(s.length()+1, vector<int>(s.length()+1, 0 ));
        
        int maxLen = 0;
        string result;
        
        for (int i=1; i<=s.length(); ++i) {
            for (int j=1; j<=s.length(); ++j) {
                if (s[i-1] == r[j-1]) {
                    matches[i][j] = matches[i-1][j-1] + 1;
                    if (matches[i][j] > maxLen && s[i-1]== s[i-matches[i][j]]) {
                        maxLen = matches[i][j];
                        result = s.substr(i-maxLen, maxLen);
                    }
                }
                
            }
            
        }
        
        return result;

    }
};