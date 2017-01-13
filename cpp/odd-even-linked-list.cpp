// https://leetcode.com/problems/odd-even-linked-list/
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
    ListNode* oddEvenList(ListNode* head) {
        if (!head) return head;
        if (head->next == NULL) return head;
        ListNode* oNodes = head;
        ListNode* oStart = oNodes;
        ListNode* oFinish = oNodes;
        
        ListNode* eNodes = oNodes->next; 
        ListNode* eStart = eNodes;
        
        while (oNodes && eNodes) {
            oNodes->next = eNodes->next;
            if (oNodes->next)
                eNodes->next = oNodes->next->next;
            oFinish = oNodes;
            oNodes = oNodes->next;
            if (oNodes) oFinish = oNodes;
            eNodes = eNodes->next;
        }
        oFinish->next = eStart;
        return oStart;
        
    }
};