// https://leetcode.com/problems/add-strings/

class Solution {
public:
    string addStrings(string num1, string num2) {
        // 123
        // 1234
        
        const size_t num1size = num1.size();
        const size_t num2size = num2.size();
        
        int num1i = num1size-1;
        int num2i = num2size-1;
        
        short prev = 0;
        string result="";
        
        while (num1i>=0 || num2i>=0) {
            
            short num1is = 0;
            short num2is = 0;
            
            if (num1i>=0) num1is = num1[num1i]-'0';
            if (num2i>=0) num2is = num2[num2i]-'0';
            
            short su = num1is + num2is + prev;
            
            result += char('0'+su%10);
            prev = su/10;
            --num1i;
            --num2i;
        }
        if (prev > 0) {
            result += char('0'+prev);
        }
        
        
        reverse(result.begin(), result.end());
        return result;
    }
};