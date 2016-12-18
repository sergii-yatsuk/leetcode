// https://leetcode.com/problems/binary-tree-level-order-traversal/

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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if (!root) return result;
        
        queue<pair<int, TreeNode*>> q;
        q.push(make_pair(0, root));
        int level=0;
        
        while (!q.empty()) {
            pair<int, TreeNode*> el = q.front();
            int currLevel = el.first;
            
            vector<int> row;
            
            while (el.first == currLevel) {
                row.push_back(el.second->val);
                if (el.second->left) {
                    q.push(make_pair(currLevel+1, el.second->left));
                }
                if (el.second->right) {
                    q.push(make_pair(currLevel+1, el.second->right));
                }
                q.pop();
                el = q.front();
                
            }
            
            result.push_back(row);
            
            
        }
        
        return result;
        
    }
    
};