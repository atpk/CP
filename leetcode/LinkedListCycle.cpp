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
	//we can also use map->more efficient
    vector<ListNode*> arr;
    
    bool isPresent(ListNode* p) {
        for(ListNode* i : arr) {
            if(p==i)
                return true;
        }
        
        return false;
    }
    
    bool hasCycle(ListNode *head) {
        if(!head)
            return false;
        
        ListNode* curr = head->next;
        arr.push_back(head);
        
        while(curr){
            if(isPresent(curr))
                return true;
            arr.push_back(curr);
            curr=curr->next;
        }
        
        return false;
    }
};