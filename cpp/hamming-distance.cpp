// https://leetcode.com/problems/hamming-distance

class Solution {
public:
    int hammingDistance(int x, int y) {
        unsigned short int result = 0;
        while (x>0 || y>0) {
            if ((x&1) != (y&1)) ++result;
            x = x>>1;
            y = y>>1;
        }
        return result;
        
    }
};