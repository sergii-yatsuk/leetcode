// https://leetcode.com/problems/path-sum/

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
    bool hasPathSum(TreeNode* root, int sum) {
        if (!root || root->left == NULL && root->right == NULL && sum == 0 ) return false;

        return dfs(root, sum);
        
    }

private:
    bool dfs(TreeNode* root, int sum) {
        if (!root) return false;
        if (root->left == NULL && root->right == NULL && root->val == sum) return true;
        
        return dfs(root->left, sum-root->val) || dfs(root->right, sum - root->val);
        
    }
};