// https://leetcode.com/problems/integer-break/
class Solution {
public:
    unordered_map<int,int> m;
    int integerBreak(int n) {
        return integerBreakRec(n, -1);
    }
    
    int integerBreakRec(int n, int max) {
        if (m.count(n)==1) return m[n];
        
        for (int i=1; i<n; ++i) {
            int k = integerBreakRec(n-i, n-i)*i;
            if (k>max) max = k;
        }
        m[n] = max;
        return max;
    }
};