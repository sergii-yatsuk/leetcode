// https://leetcode.com/problems/add-two-numbers/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if (!l1) return l2;
        if (!l2) return l1;
        
        ListNode* l3 = new ListNode(0);
        ListNode* cur = l3;
        int over = 0;
        
        do {
            int r = l1->val + l2->val + over;
            over = r/10;
            cur->next = new ListNode(r % 10);
            cur = cur->next;
            l1 = l1->next;
            l2 = l2->next;
        } while (l1 && l2);
        if (l1)
        do {
            int r = l1->val + over;
            over = r/10;
            cur->next = new ListNode(r % 10);
            cur = cur->next;
            l1 = l1->next;
        } while (l1);
        if (l2)
        do {
            int r = l2->val + over;
            over = r/10;
            cur->next = new ListNode(r % 10);
            cur = cur->next;
            l2 = l2->next;
        } while (l2);
        
        if (over > 0) {
            cur->next = new ListNode(over);
        }
        
        ListNode* res = l3->next;
        delete l3;
        return res;
    }
};