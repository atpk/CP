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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = l1;
        ListNode* temp = l1;
        int carry=0,a=0;
        while(l1 && l2) {
            a=l1->val + l2->val + carry;
            carry=a/10;
            a=a%10;
            l1->val = a;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1){
            if(carry==0)
                break;
            a=l1->val + carry;
            carry=a/10;
            a=a%10;
            l1->val = a;
            l1=l1->next;
        }
        while(l2){
            a=l2->val + carry;
            carry=a/10;
            a=a%10;
            ListNode* b = new ListNode(a);
            while(temp->next)
                temp=temp->next;
            temp->next = b;
            // l1 = b;
            // l1 = l1->next;
            l2=l2->next;
        }
        if(carry>0){
            temp = head;
            // cout<<carry<<endl;
            ListNode* b = new ListNode(carry);
            // cout<<b->val;
            while(temp->next)
                temp=temp->next;
            temp->next = b;
        }
        return head;
    }
};