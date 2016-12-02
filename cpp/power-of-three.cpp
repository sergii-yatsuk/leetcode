// https://leetcode.com/problems/power-of-three/

class Solution {
public:
    bool isPowerOfThree(int n) {
        
        double p = log(n)/log(3);
        
        int r = 1;
        for (int i = 0; i<p; ++i) {
            r *= 3;
        }
        cout<<p;
        return r == n;
    }
};