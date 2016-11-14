// https://leetcode.com/problems/first-bad-version/

// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        // f f f f f f t t
        // 1 2 3 4 5 6 7 8
        
        
        // f t
        // 1 2
        int l = 1;
        int r = n;
        
        while (l!=r) {
            int m = l+(r-l)/2;
            
            if (isBadVersion(m)) {
                r = m;
            }
            else {
                l = m+1;
            }
            
        }
        return r;
    }
};