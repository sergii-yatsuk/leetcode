// https://leetcode.com/problems/unique-word-abbreviation/

class ValidWordAbbr {
public:
    ValidWordAbbr(vector<string> &dictionary) {
        for (auto& a: dictionary) {
            s[getAbbr(a)].push_back(a);
        }
    }

    bool isUnique(string word) {
        auto a = getAbbr(word);
        auto sz = s[a].size();
        if (sz < 1) return true;
        
        for (auto& i : s[a]) {
            if (i != word) return false;
        }
        return true;    
    }

private:
   unordered_map<string, vector<string>> s;
   
   string getAbbr(string& str) {
       if (str.size() <3 ) return str;
       
       return string("") + str[0] + to_string(str.size()-2) + str[str.size()-1];
   }
};



// Your ValidWordAbbr object will be instantiated and called as such:
// ValidWordAbbr vwa(dictionary);
// vwa.isUnique("hello");
// vwa.isUnique("anotherWord");