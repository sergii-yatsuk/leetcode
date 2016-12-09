// https://leetcode.com/problems/sum-of-left-leaves/
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
    int sumOfLeftLeaves(TreeNode* root) {
        return sumOfLeftRec(root, false);
    }
    
    int sumOfLeftRec(TreeNode* root, bool isLeft) {
        if (!root) return 0;
        if (root->left == NULL && root->right == NULL && isLeft) return root->val;
        return sumOfLeftRec(root->left, true) + sumOfLeftRec(root->right, false);
        
    }
};