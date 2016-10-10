//https://leetcode.com/problems/excel-sheet-column-title/
#include <iostream>
#include <cmath>

using namespace std;

class Solution {
public:

   string convertToTitle(int n) {
      string result;
      while (n > 0)
      {
         int i = n % 26;
         if (!i) { i = 26; n = int(n / 26) -1; }
         else n = int(n / 26);
         result = char(64 + i) + result;
         
      }
      return result;
   }
};

int main()
{
   Solution s;
   cout << s.convertToTitle(1).c_str() << endl; //A
   cout << s.convertToTitle(26).c_str() << endl;  // Z
   cout << s.convertToTitle(52).c_str() << endl; //AZ
   cout << s.convertToTitle(701).c_str() << endl; //ZY
   return 0;
}