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
    vector<ListNode*> arr;
    
    bool isPresent(ListNode* p) {
        for(ListNode* i : arr) {
            if(p==i)
                return true;
        }
        
        return false;
    }

    ListNode *detectCycle(ListNode *head) {
        if(!head)
            return NULL;
        
        ListNode* curr = head->next;
        arr.push_back(head);
        
        while(curr){
            if(isPresent(curr))
                return curr;
            arr.push_back(curr);
            curr=curr->next;
        }
        
        return NULL;
    }
};