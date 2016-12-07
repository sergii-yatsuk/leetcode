// https://leetcode.com/problems/palindrome-number/

class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0) return false;
        if (x<10) return true;
        int tmp = x;
        long length = 1;
        
        while (tmp>0) {
            length *= 10;
            tmp /= 10;
        }
        length /= 10;
        
        while (x>0){
            int first = x/length;
            int last = x%10;
            
            if (first!=last) {
                return false;
            }
            
            x = x % length;
            x = x / 10;
            length /= 100;
            
        }
        
        
        return true;
    }
};