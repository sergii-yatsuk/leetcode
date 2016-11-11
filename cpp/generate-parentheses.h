//https://leetcode.com/problems/generate-parentheses/ 

#include <vector>
#include <string>

using namespace std;

class Solution {
private:
   void generateParenthesis(int leftP, int rightP, string curString, vector<string>& res) {
      if (rightP == 0) {
         res.push_back(curString);
      }
      else {
         if (leftP > 0) {
            generateParenthesis(leftP - 1, rightP, curString + "(", res);
            if (rightP > leftP) generateParenthesis(leftP, rightP - 1, curString + ")", res);

         }
         else {
            generateParenthesis(leftP, rightP - 1, curString + ")", res);
         }

      }

   }
public:
   vector<string> generateParenthesis(int n) {
      vector<string> results;
      generateParenthesis(n, n, "", results);
      return results;
   }
};