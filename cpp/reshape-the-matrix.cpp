class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        
        int origR = nums.size();
        int origC = nums[0].size();
        
        if (r*c != origR*origC) return nums;
        
        vector<vector<int>> result(r, vector<int>(c));
        
        int k=0;
        for (int i=0; i<origR; ++i) {
            for (int j = 0; j<origC; ++j) {
                result[k/c][k%c] = nums[i][j];
                ++k;
            }
        }
        
        
        
        return result;
    }
};
