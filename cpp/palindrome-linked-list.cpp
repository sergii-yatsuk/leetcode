// https://leetcode.com/problems/palindrome-linked-list/

class Solution {
public:
   bool isPalindrome(ListNode* head) {
      if (!head || !head->next) return true;
      ListNode* firstPart = head;
      ListNode* secondPart = NULL;
      ListNode* fastPtr = head;
      ListNode* slowPtr = head;
      ListNode* midpoint = NULL;

      while (fastPtr && fastPtr->next)
      {
         midpoint = slowPtr;
         slowPtr = slowPtr->next;
         fastPtr = fastPtr->next->next;
      }
      if (fastPtr) {
         midpoint = slowPtr;
         slowPtr = slowPtr->next;
      }

      secondPart = slowPtr;
      secondPart = slowPtr;
      reverseList(&secondPart);

      while (secondPart) {
         if (firstPart->val != secondPart->val) return false;
         firstPart = firstPart->next;
         secondPart = secondPart->next;
      }
      return true;
   }

   void reverseList(ListNode** head) {
      ListNode* prev = NULL;
      ListNode* cur = *head;
      ListNode* next = cur->next;

      while (next) {
         cur->next = prev;
         prev = cur;
         cur = next;
         next = next->next;
      }
      cur->next = prev;
      *head = cur;
   }
};
