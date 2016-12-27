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
        unordered_map<TreeNode*, int> m;
        return robDown(root, m);
        

    }
    
private:
   int robDown(TreeNode* root, unordered_map<TreeNode*, int>& m) {
       if (!root) return 0;
       if (m.count(root)==1) return m[root];
       
        if (root->left == NULL && root->right==NULL) return root->val;
        
        int result=0;
        
        if (root->left) {
            result += robDown(root->left->left, m)+robDown(root->left->right, m);
        }
        
        if (root->right) {
            result += robDown(root->right->left, m)+robDown(root->right->right, m);
        }
        result = max(result+root->val, robDown(root->left, m) + robDown(root->right, m));
        m[root] = result;
        return result;
   }
};