// https://leetcode.com/problems/combination-sum/

class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> tmp;
        int sum = 0;
        vector<vector<int>> result;
        combS(candidates, target, tmp, sum, 0, result);
        return result;
    }
        
    
private:
    void combS(vector<int>& candidates, int target, vector<int>& tmp, int sum, int start, vector<vector<int>>& result) {
        if (sum == target) {
            result.push_back(tmp);
            return;
        }
        
        for (int i = start; i<candidates.size(); ++i) {
            auto& a = candidates[i];
            if (sum+a<=target) {
                tmp.push_back(a);
                combS(candidates, target, tmp, sum+a, i, result);
                tmp.pop_back();
            }
        }
        return;
    }
};