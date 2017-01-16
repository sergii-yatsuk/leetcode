// https://leetcode.com/problems/maximum-product-of-word-lengths/

class Solution {
public:
    int maxProduct(vector<string>& words) {
        vector<int> ht(words.size());
        int sz=words.size();
        
        for (int i = 0; i<sz; ++i) {
            for (int k =0; k<words[i].size(); ++k) {
                const char c = words[i][k];
                int mask = 1<<(c-'a');
                ht[i] |= mask;
            }
        }
        int res = 0;
        
        for (int i=0; i<sz-1; ++i) {
            for (int j=i+1; j<sz; ++j) {
                if ((ht[i]&ht[j]) == 0) {
                    res = max(res, int(words[i].size()*words[j].size()));
                }
            }
        }
        
        return res;
        
    }
};