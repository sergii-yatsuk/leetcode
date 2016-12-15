// https://leetcode.com/problems/minimum-window-substring/

class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> need;
        unordered_map<char, int> t_map;
        unordered_map<char, int> used;

        
        for (auto& a: t) {
            ++need[a];
            ++t_map[a];
        }
        
        int l = 0;
        int r = 0;
        
        int minL = 0;
        int minR = s.size()+1;
        
        while (r<s.size() || l < s.size()) {
            
            while (need.size()>0 && r<s.size()) {
                if (need.count(s[r]) == 1) {
                    --need[s[r]];
                    if (need[s[r]] == 0) {
                        need.erase(s[r]);
                    }
                }
                ++used[s[r]];
                ++r;
            }
            
            
            while (used[s[l]] > t_map[s[l]] && l < r) {
                --used[s[l]];
                ++l;
            }
            
            if (need.size()==0 && r-l >= t.size() && r-l < minR - minL) {
                minL = l;
                minR = r;
            } 
            
            --used[s[l]];
            ++need[s[l]];
            ++l;
        }
        
        
        if (minR-minL > s.size()) 
            return "";
        else
            return s.substr(minL, minR-minL);
    }
};