// https://leetcode.com/problems/merge-two-sorted-lists/

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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* n=new ListNode(0);
        ListNode* res = n;
        while (l1 && l2) {
            if (l1->val < l2->val) {
                n->next=new ListNode(l1->val);
                l1 = l1->next;

            }
            else  {
                n->next=new ListNode(l2->val);
                l2 = l2->next;
            }
            n = n->next;
        }
        
        while (l1) {
            n->next=new ListNode(l1->val);
            l1 = l1->next; 
            n = n->next;
        }
        
        while (l2) {
            n->next=new ListNode(l2->val);
            l2 = l2->next; 
            n = n->next;
        }
        
        n=res;
        delete n;
        res = res-> next;
        return res;
    }
};