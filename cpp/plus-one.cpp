// https://leetcode.com/problems/plus-one/


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        std::reverse(digits.begin(), digits.end());
        
        int n = 1;
        for (size_t i=0; i<digits.size(); ++i) {
            int tmp = digits[i]+n;
            digits[i] = tmp%10;
            n = tmp/10;
        }
        if (n>0) digits.push_back(n);
        std::reverse(digits.begin(), digits.end());
        return digits;
    }
};