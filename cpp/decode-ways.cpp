// https://leetcode.com/problems/decode-ways

class Solution {
public:
    int numDecodings(string s) {
        if (s.empty()) return 0;
        if (s[0]=='0') return 0;
        size_t sz = s.size();
        vector<int> dp(sz+1);

        dp[0] = 1;
        dp[1] = s[0] == '0' ? 0 : 1;

        for(size_t i=2; i<=sz; ++i) {
            if (s[i-1]>'0')
                dp[i] += dp[i-1];

            if (s[i-2] == '1' || s[i-2] == '2'&& s[i-1]<='6')
                dp[i] += dp[i-2];

        }
        return dp[sz];
    }
};