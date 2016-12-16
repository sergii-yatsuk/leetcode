// https://leetcode.com/problems/path-sum-ii/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        
        vector<vector<int>> result;
        if (!root || root->left == NULL && root->right == NULL && sum == 0 ) return result;
        
        vector<int> current;
        dfs(root, sum, result, current);
        
        return result;
    }
    
    
private:
    void dfs(TreeNode* root, int sum, vector<vector<int>>& results, vector<int> currentPath) {
        if (!root) return;
        
        if (root->left == NULL && root->right == NULL && root->val == sum) {
            currentPath.push_back(root->val);
            results.push_back(currentPath);
            return;
        }
        
        currentPath.push_back(root->val);
        dfs(root->left, sum-root->val, results, currentPath);
        dfs(root->right, sum - root->val, results, currentPath);
        
    }
};