// https://leetcode.com/problems/paint-fence/
class Solution {
public:
    int numWays(int n, int k) {
        if (n==0 || k==0 || (n>2&&k==1)) return 0;
        
        int w1 = k;
        int w2 = w1*k;
        int w3;
        
        if (n==1) return w1;
        if (n==2) return w2;
        
        
        
        for(int i =0; i<=n-3; ++i) {
            w3 = (k-1)*(w1+w2);
            w1 = w2;
            w2 = w3;
        }
        
        return w2;
    }
};
