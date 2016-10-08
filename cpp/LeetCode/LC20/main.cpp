//https://leetcode.com/problems/valid-parentheses/
#include <stack>
#include <iostream>

using namespace std;

class Solution {
public:

   bool isValid(string s) {

      int p1; // ()
      int p2; // []
      int p3; // {}

      stack<char> st;


      for (size_t i = 0; i < s.length(); ++i)
      {
         switch (s[i])
         {
         case '(':
            ++p1;
            st.push(s[i]);
            break;
         case ')':
            if (!st.empty() && st.top() == '(' && p1 > 0)
            {
               --p1;
               st.pop();
            }
            else
            {
               return false;
            }
            break;
         case '[':
            ++p2;
            st.push(s[i]);
            break;
         case ']':
            if (!st.empty() && st.top() == '[' && p2 > 0)
            {
               --p2;
               st.pop();
            }
            else
            {
               return false;
            }
            break;
         case '{':
            ++p3;
            st.push(s[i]);
            break;
         case '}':
            if (!st.empty() && st.top() == '{' && p3 > 0)
            {
               --p3;
               st.pop();
            }
            else
            {
               return false;
            }
            break;
         default: return false;
         }
      }
      return st.empty();
   }


};

int main()
{
   Solution s;
   cout<<s.isValid("([)]");
   return 0;
}