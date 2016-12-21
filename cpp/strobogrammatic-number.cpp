// https://leetcode.com/problems/strobogrammatic-number/

class Solution {
public:
    bool isStrobogrammatic(string num) {
        int l = 0;
        int r = num.size()-1;
        
        while (l<=r) {
            if (!areSymetric(num[l], num[r])) return false;
            ++l;
            --r;
        }
        
        return true;
        
    }
    
private:
   bool areSymetric(char a, char b) {
       // 0 - 0 
       // 1 - 1
       // 2 
       // 3
       // 4 
       // 5 
       // 6 - 9
       // 7 
       // 8 - 8 
       // 9 - 6
       
       return (a == '1' && b == '1' || 
           a == '6' && b == '9' ||
           a == '8' && b == '8' ||
           a == '9' && b == '6' ||
           a == '0' && b == '0');
           
   }
};