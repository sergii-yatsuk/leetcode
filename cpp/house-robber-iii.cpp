// https://leetcode.com/problems/house-robber-iii/

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
    int rob(TreeNode* root) {
        if (!root) return 0;
        if (root->left == NULL && root->right==NULL) return root->val;
        
        int result=0;
        if (root->left && root->right  == NULL) {
            int r1 = rob(root->left->left)+rob(root->left->right)+ root->val;
            int r2 = rob(root->left);
            result = max(r1, r2);
        }
        
        if (root->right && root->left == NULL) {
            int r1 = rob(root->right->left)+rob(root->right->right)+ root->val;
            int r2 = rob(root->right);
            int r3 = max(r1, r2);
            result = max(result, r3);
        }
        
        if (root->left && root-> right) {
            int r1 = rob(root->left) + rob(root->right);
            int r2 = rob(root->right->left)+rob(root->right->right)+rob(root->left->left)+rob(root->left->right)+root->val;
            result = max(r1, r2);
        }
        
        return result;
        
    }
};