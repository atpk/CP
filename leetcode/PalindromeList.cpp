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
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return true;
        
        ListNode* temp = NULL;
        ListNode* res = head;
        //reverse
        while(head){
            ListNode* b = new ListNode(head->val);
            b->next = temp;
            temp = b;
            head=head->next;
        }
        //check
        while(temp){
            if(temp->val != res->val)
                return false;
            temp = temp->next;
            res = res->next;
        }
        
        return true;
    }
};