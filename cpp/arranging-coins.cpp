// https://leetcode.com/problems/arranging-coins/
class Solution {
public:
    int arrangeCoins(int n) {
        // (x+1)*x/2=n
        // x^2+x-2*n=0
        // D = 1+8n

        double x = (-1.0+sqrt(8.0)*sqrt(0.125+n))/2.0;
        return int(x);
        
        
    }
};