// https://leetcode.com/problems/longest-common-prefix/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        if (strs.size() == 1) return strs[0];
        size_t finish=0;
        bool stop = false;
        
        for (size_t i=0; i<strs[0].length() && !stop; ++i) {
            
            for (size_t j=1; j<strs.size(); ++j ) {
                if (strs[j].size()<=i || strs[j][i] != strs[0][i]) stop = true;
            }
            if (!stop) ++finish;
            
        }
        
        return strs[0].substr(0,finish);
        
    }

};