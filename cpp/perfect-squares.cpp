// https://leetcode.com/problems/perfect-squares/
class Solution {
public:
    int numSquares(int n) 
    {
        if (n <= 0)
        {
            return 0;
        }
        
        vector<int> result(n + 1);
        result[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            result[i] = i;
            for (int j = 1; j*j <= i; j++)
            {
                result[i] = min(result[i], result[i - j*j] + 1);
            }
        }
        
        return result[n];
    }
};