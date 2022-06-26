/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head)
            return NULL;
        ListNode* h2=head->next;
        if(!h2)
            return head;
        
        head->next = h2->next;
        h2->next = head;
        head->next = swapPairs(head->next);
        
        return h2;
    }
};