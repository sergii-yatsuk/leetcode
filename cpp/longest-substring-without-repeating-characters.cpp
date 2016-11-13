class Solution {
public:
   int lengthOfLongestSubstring(string s) {
      int longest = 0;
      unordered_set<char> set;
      size_t i, j, n;
      i = 0;
      j = 0;
      n = s.size();
      
      while (i < n && j < n) {
         if (set.count(s[j])==0) {
            set.insert(s[j]);
            ++j;
            if (j - i > longest) longest = j - i;
         }
         else {
            set.erase(s[i]);
            ++i;
         }
      }
      
      return longest;
   }
};