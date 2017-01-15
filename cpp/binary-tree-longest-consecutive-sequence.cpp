// https://leetcode.com/problems/binary-tree-longest-consecutive-sequence/

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
    int longestConsecutive(TreeNode* root) {
       return lc(root);   
    }
    
private:
   int lc(TreeNode* root, int cur=1) {
     if (!root) return 0;
     int res = cur;
     
     if (root->left) {
        if (root->val - root->left->val == -1) {
            res = max (res, lc(root->left, cur+1));
        } else {
            res = max (res, lc(root->left, 1));
        }
     }
     
     if (root->right) {
        if (root->val - root->right->val == -1) {
            res = max (res, lc(root->right, cur+1));
        } else {
            res = max (res, lc(root->right, 1));
        }         
     }
     
     return res;
   }
};