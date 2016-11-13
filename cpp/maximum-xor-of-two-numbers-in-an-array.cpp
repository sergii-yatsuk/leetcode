
namespace {
   struct TrieNode;
   typedef shared_ptr<TrieNode> TrieNodePtr;


   struct TrieNode {
      int endValue;
      TrieNodePtr zeroChild;
      TrieNodePtr oneChild;
      TrieNode() : endValue(-1), zeroChild(nullptr), oneChild(nullptr) {}
   };

   void AddToTrie(TrieNodePtr& root, int number) {
      int highestBit = pow(2, 30);
      TrieNodePtr currentNode = root;
      while (highestBit > 0) {
         bool isCurrentBitOne = number & highestBit;
         highestBit = highestBit >> 1;

         if (isCurrentBitOne) {
            if (!currentNode->oneChild) currentNode->oneChild = make_shared<TrieNode>();
            currentNode = currentNode->oneChild; continue;
         }
         else {
            if (!currentNode->zeroChild) currentNode->zeroChild = make_shared<TrieNode>();
            currentNode = currentNode->zeroChild; continue;
         }
      }
      currentNode->endValue = number;
   }

   int findNearest(TrieNodePtr& root, int number) {
      int highestBit = pow(2, 30);
      TrieNodePtr currentNode = root;
      while (highestBit > 0) {
         bool isCurrentBitOne = number & highestBit;
         highestBit = highestBit >> 1;

         if (isCurrentBitOne && currentNode->oneChild) {
            currentNode = currentNode->oneChild; continue;
         }

         if (!isCurrentBitOne && currentNode->zeroChild) {
            currentNode = currentNode->zeroChild; continue;
         }

         if (currentNode->oneChild) {
            currentNode = currentNode->oneChild; continue;
         }
         if (currentNode->zeroChild) {
            currentNode = currentNode->zeroChild; continue;
         }
      }
      return currentNode->endValue;
   }
}
class Solution {
public:
   int findMaximumXOR(vector<int>& nums) {
      if (nums.empty()) return 0;
      if (nums.size() == 1) return nums[0] ^ nums[0];
      TrieNodePtr root = make_shared<TrieNode>();

      for (auto n : nums) {
         AddToTrie(root, n);
      }

      int mask = int(pow(2, 31)) - 1;
      int maxXor = 0;
      int curXor = 0;

      for (auto n : nums) {
         curXor = findNearest(root, n^mask) ^ n;
         if (curXor > maxXor) maxXor = curXor;

      }
      return maxXor;
   }
};