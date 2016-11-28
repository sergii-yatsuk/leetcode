// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) return 0;
        int mmin=prices[0]+1;
        int mmax=0;
        for (size_t i=0; i<prices.size(); ++i) {
            if (prices[i]<mmin) mmin=prices[i];
            else if ( prices[i] - mmin > mmax ) {
                mmax = prices[i]-mmin;
            }
            
        }
        
        return mmax;
        
    }
};