// https://leetcode.com/problems/intersection-of-two-linked-lists/

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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (!headA || !headB) return NULL;
        
        int lenA;
        int lenB;
        
        ListNode* p = headA;
        while (p) {
            ++lenA;
            p=p->next;
        }
        
        p = headB;
        while (p) {
            ++lenB;
            p=p->next;
        }
        
        if (lenA > lenB) {
            while (lenA!=lenB && headA) {
                headA=headA->next;
                --lenA;
            }
        }
        else if (lenB > lenA) {
            while (lenA!=lenB && headB) {
                headB=headB->next;
                --lenB;
            }
        }
        
        
        while (headA && headB && headA!=headB) {
            headA=headA->next;
            headB=headB->next;
        }
        
        if (!headA || !headB) return NULL;
        return headA;
    }
};