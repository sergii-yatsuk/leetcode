// https://leetcode.com/problems/integer-replacement

class Solution {
public:
    int integerReplacement(int n) {
        long long result = 0;
        long long ln = n;
        while (ln>1) {
            if (ln==3) {
                --ln;
            }
            else if (ln%2==0) {
                ln /=2;
            }
            else if (ln&2){
                ++ln;
            }
            else {
                --ln;
            }
            ++result;
        }

        return result;
        
    }
};
