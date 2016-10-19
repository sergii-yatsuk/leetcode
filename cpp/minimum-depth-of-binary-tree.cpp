#include <queue>
#include <utility>

//struct TreeNode {
//   int val;
//   TreeNode *left;
//   TreeNode *right;
//   TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};

using namespace std;

class Solution {
public:
   int minDepth(TreeNode* root) {
      queue<pair<TreeNode*, int>> q;

      q.push(make_pair(root, 0 ));
      while (!q.empty()) {
         auto a = q.front();
         q.pop();
         TreeNode* node = a.first;
         int level = a.second;
         if (!node) return level;
         level++;
         if (node->left == NULL && node->right == NULL) return level;
         if (node->left) q.push(make_pair(node->left, level));
         if (node->right) q.push(make_pair(node->right, level));
      }
      return 0;
   }
};