// https://leetcode.com/problems/powx-n/#/description

class Solution {
public:
    double myPow(double x, int n) {
        double result=1;
        double eps = 0.0000001;
        if (n==0) return 1;


        bool negativePower=false;
        long long power = n;
        if (power<0) {
            power = -power;
            negativePower = true;
        }

        if (abs(x-1)<eps) return x;
        if (abs(x+1)<eps) {
            if (power%2 == 1) return x;
            else return -x;
        }


        while (power>0) {
            result *= x;
            --power;
            if (!negativePower && abs(result) < eps) return 0;
            if (negativePower && abs(result) > 10000000) return 0;
        }

        if (negativePower) result = 1/result;

        return result;
    }
};