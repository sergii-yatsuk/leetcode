// https://leetcode.com/problems/maximum-subarray

class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
        size_t sz = A.size();
        if (sz<3) return 0;
        vector<int> len(sz);
        int result = 0;
        for (int i=2; i<sz; ++i) {
            if (A[i]-A[i-1] == A[i-1]-A[i-2]) len[i]=len[i-1]+1;
            result += len[i];
        }

        return result;

    }
};