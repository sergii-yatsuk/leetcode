// https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        for (int i =0; i < nums.size(); ++i) {
            int a = abs(nums[i]) - 1;
            if (nums[a]>0) nums[a]=-nums[a];
        }
        
        
        vector<int> result;
        for (int i =0; i < nums.size(); ++i) {
            if (nums[i]>0) result.push_back(i+1);
        }
        
        return result;
        
    }
};