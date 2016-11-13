// https://leetcode.com/problems/kth-smallest-element-in-a-bst/

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
    int kthSmallest(TreeNode* root, int k) {
        return smallest(root, k);
    }
    
    int smallest(TreeNode* node, int& k) {
        if (!node) return -1;
        int val = smallest(node->left, k);
        if (k==0) return val;
        if (--k==0) return node->val; 
        return smallest(node->right, k);
    }
};