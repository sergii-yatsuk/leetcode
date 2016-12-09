// https://leetcode.com/problems/combinations/

class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        // C(n, k) = C(n-1, k-1) + C(n-1, k)
        vector<vector<int>> ans;
        vector<int> cur;
        combineRec(n, k, ans, cur);
        return ans;
    }
    
private:
    void combineRec(int n, int k, vector<vector<int>>& ans, vector<int>& cur) {
        if (k == 0) {
            ans.push_back(cur);
            return;
        }
        
        for (int i = n; i>=k; --i) {
            cur.push_back(i);
            combineRec(i-1, k-1, ans, cur);
            cur.pop_back();
        }

        return;
    }
};