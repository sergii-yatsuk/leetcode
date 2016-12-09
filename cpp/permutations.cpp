// https://leetcode.com/problems/permutations/

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        
        permuteRec(nums, 0, ans);
        return ans;
    }
    
private:
    void permuteRec(vector<int>& nums, int pos, vector<vector<int>>& ans) { 
        if (pos == nums.size()) {
            ans.push_back(nums);
            return;
        }
        
        
        for (int i=pos; i<nums.size(); ++i) {
            swap(nums[pos], nums[i]);
            permuteRec(nums, pos+1, ans);
            swap(nums[pos], nums[i]);
        }
        
        return;
        
    }
};