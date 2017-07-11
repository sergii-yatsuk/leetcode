class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> result;
        map<char,int> pm;
        map<char,int> curs;

        if (s.empty()) return result;
        if (p.empty()) {
            for (size_t i=0; i<=s.length(); ++i) result.push_back(i);
            return result;
        }
        
        for (char c ='a'; c<='z'; ++c) {
            pm[c] = 0;
            curs[c] = 0;
            
        }
        
        for(auto a: p) {
            ++pm[a];
        }

        size_t pl = p.length();
        for (size_t i=0; i<pl; ++i) {
            ++curs[s[i]];
        }
        
        if (curs == pm) {
            result.push_back(0);
        }
        
        size_t sl = s.length();
        
        for (size_t i=pl; i<sl; ++i) {
            --curs[s[i-pl]];
            ++curs[s[i]];
            
            if (curs == pm) {
                result.push_back(i-pl+1);
            }
           
        }
        
        
        return result;
    }
};
