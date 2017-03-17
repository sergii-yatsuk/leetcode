// https://leetcode.com/problems/predict-the-winner

class Solution {
private: 
   int dpRec(const vector<int>& nums, size_t l, size_t r, vector<vector<int>>& memo) {
       if (l==r) return nums[l];
       if (memo[l][r] != 0 ) memo[l][r];
       int result = max(-dpRec(nums, l+1, r, memo) + nums[l], -dpRec(nums, l, r-1, memo) + nums[r]);
       memo[l][r] = result;
       return result;
   }
    
public:
    bool PredictTheWinner(vector<int>& nums) {
        size_t sz = nums.size();
        vector<vector<int>> memo(sz, vector<int>(sz, 0));
        
        return dpRec(nums, 0, nums.size()-1, memo) >= 0;
        
    }
};