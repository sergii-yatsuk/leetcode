// https://leetcode.com/problems/generalized-abbreviation/

class Solution {
public:
    vector<string> generateAbbreviations(string word) {
        vector<string> res;
        res.push_back("");
        doAbbr(0, res, word);
        return res;
        
    }
private:
   void doAbbr(int pos, vector<string>& res, string word) {
       if (pos == word.size()) return;
       int sz = res.size();
       for (int i=0; i<sz;++i) {
           string tmp(res[i]);
           res[i] = res[i] + word[pos];
           
           if (tmp.size()>0 && tmp[tmp.size()-1]<'A') {
               if (tmp[tmp.size()-1]=='9') {
                   tmp[tmp.size()-1] = '1';
                   tmp += '0';
               } else
               {
                tmp[tmp.size()-1] = tmp[tmp.size()-1]  +1 ;
               }
               res.push_back(tmp);
           }
           else {
               res.push_back(tmp+'1');
           }
           
       }
       
       doAbbr(pos+1, res, word);
   }
};