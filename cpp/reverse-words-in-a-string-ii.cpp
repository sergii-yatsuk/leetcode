// https://leetcode.com/problems/reverse-words-in-a-string-ii/

class Solution {
public:
    void reverseWords(string &s) {
        int i = 0;
        int j = s.size()-1;
        
        while (i<j) {
            char c = s[i];
            s[i] = s[j];
            s[j] = c;
            ++i;
            --j;
        }
        
        cout<<"----"<<s<<endl;
        
        i=0; j=-1;
        int sz = s.size();
        
        while (j<sz) {
            i = j+1;
            j = i+1;
            while (j<sz && s[j]!=' ') ++j;
            int i1 = i;
            int j1 = j-1;
            
            while (i1<j1) {
                char c = s[i1];
                s[i1] = s[j1];
                s[j1] = c;
                ++i1;
                --j1;
            }
        }
        
    };
};