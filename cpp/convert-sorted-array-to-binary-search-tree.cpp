// https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/
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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return sa2BST(nums, 0, nums.size());
    }
    
private:
   TreeNode* sa2BST(vector<int>& nums, int begin, int end) {
       int sz = end - begin;
       if (sz==0) return NULL;
       
       size_t m = begin + (end-begin)/2;
       TreeNode* result = new TreeNode(nums[m]);
       result->left = sa2BST(nums, begin, m);
       result->right = sa2BST(nums, m+1, end);
       
       
       
       return result;
       
   }
};