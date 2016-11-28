// https://leetcode.com/problems/reverse-vowels-of-a-string/
class Solution {
public:
    string reverseVowels(string s) {
        if (s.size()<2) return s;

        unordered_set<char> m = {'e', 'u','o','a', 'i', 'E', 'U', 'O', 'A','I'};

        int i=0;
        int j=s.size();
        
        while (i<j) {
            while(m.count(s[i])==0 && i<s.size()) ++i;
            while(m.count(s[j])==0 &&j>=0) --j;
            
            if (i<j) {
                char tmp = s[i];
                s[i] = s[j];
                s[j] = tmp;
                ++i;
                --j;
            }
            
        }
        
        return s;
        
    }
};