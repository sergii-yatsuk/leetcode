// https://leetcode.com/problems/merge-k-sorted-lists/

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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        int i = 0;
        while (i<lists.size()) {
            if (!lists[i]) {
                swap(lists[i], lists[lists.size()-1]);
                lists.pop_back();
            }
            else ++i;
        }
        if (lists.size() == 1) return lists[0];
        if (lists.size() == 0) return NULL;
        
        
        
        // build min-heap
        heapSort(lists);

        ListNode* result = new ListNode(lists[0]->val);
        ListNode* cur = result;
        
        lists[0] = lists[0]->next;
        if (!lists[0]) {
            swap(lists[0], lists[lists.size()-1]);
            lists.pop_back();
        }
        minHeapify(lists, 0);  
        
        while (lists.size()>0) {
            cur->next  = new ListNode(lists[0]->val);
            cur = cur->next;
            
            lists[0] = lists[0]->next;
            if (!lists[0]) {
                swap(lists[0], lists[lists.size()-1]);
                lists.pop_back();
            }
            minHeapify(lists, 0);            
        }
        
        
        return result;
    }
    
private:
    void minHeapify(vector<ListNode*>& lists, int i) {
        int smallest = i;
        int n = lists.size();
        int l = 2*i+1;
        int r = 2*i+2;
        
        if (l<n && lists[l]->val < lists[smallest]->val) {
            smallest = l;
        }
        
        if (r<n && lists[r]->val < lists[smallest]->val) {
            smallest = r;
        }
        
        if (smallest != i) {
            swap(lists[i], lists[smallest]);
            minHeapify(lists, smallest);
        }
    }
    
    void heapSort(vector<ListNode*>& lists) {
        int n = lists.size() / 2;
        for (int i=n-1; i>=0; --i) {
            minHeapify(lists, i);
        }
    }
};