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
    /*
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        if(!head)
            return head;
            
        Node* temp;
        Node* cur = head;
        head = head->next;
        cur->next = NULL;
        temp = cur;
        
        while(head != NULL)
        {
            cur = head;
            head = head->next;
            cur->next = temp;
            temp = cur;
        }
        
        return temp;
    }
    */
   
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode *rest=reverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        return rest;
        
    }
};