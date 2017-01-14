//https://leetcode.com/problems/word-break/

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict)  {
        std::vector<bool> dp(s.size()+1, false);
        dp[0]=true;
        for(int i =1; i<=s.size(); ++i) {
            for (auto& w: wordDict) {
                if (w.size()<=i &&
                    w == s.substr(i-w.size(), w.size()) &&
                    dp[i-w.size()] ) {
                    dp[i] = true;
                }
            }
        }
        return dp[s.size()];
    }
    
};