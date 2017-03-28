// https://leetcode.com/problems/find-bottom-left-tree-value

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
private:
    int findRec(TreeNode* root, int level) {
        return 0;
    }
public:
    int findBottomLeftValue(TreeNode* root) {
        queue <pair<TreeNode*, int>> q;
        q.push(make_pair(root,0));
        pair<TreeNode*, int> result=q.front();
        while (!q.empty()) {
            pair<TreeNode*, int> el = q.front();
            if (el.second > result.second) result = el;


            if (el.first->left) 
                q.push(make_pair(el.first->left,el.second+1));
            if (el.first->right) 
                q.push(make_pair(el.first->right,el.second+1));
            q.pop();
        }
        return result.first->val;
    }
};