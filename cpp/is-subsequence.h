#include <string>

using namespace std;

class Solution {
public:
   bool isSubsequence(std::string s, std::string t) {
      if (t.size() < s.size()) return false;
      if (t == s) return true;
      if (s.empty()) return true;
      if (t.empty()) return false;


      int word_index = s.size() - 1;  // point to last element of word
      int s_index = t.size() - 1;  // point to last element of s


      while (word_index >= 0 && s_index >= 0) {
         if (t[s_index] == s[word_index]) {
            --word_index;
            --s_index;
         }
         else {
            --s_index;
         }
      }

      if (word_index == -1) return true;


      return false;
   }
};
