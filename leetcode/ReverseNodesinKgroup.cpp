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
    ListNode* reverseList(ListNode* head) {
        ListNode* curr;
        ListNode* rev=NULL;
        while(head){
            curr=head;
            head=head->next;
            curr->next=rev;
            rev=curr;
        }
        
        return rev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head || !head->next || k==1)
            return head;
        
        ListNode* cur=head;
        ListNode* r=head;
        ListNode* r2=NULL;
        ListNode* rp=NULL;
        int c=0;
        head = NULL;
        while(cur){
            if(c==0){
                r=cur;
                c++;
                cur=cur->next;
            }
            else if(c==k){
                r2->next=NULL;
                r = reverseList(r);
                if(!head)
                    head=r;
                else
                    rp->next=r;
                r2=r;
                while(r2->next)
                    r2=r2->next;
                r2->next=cur;
                rp=r2;
                c=0;
            }
            else{
                c++;
                r2=cur;
                cur=cur->next;
            }
        }
        if(c==k){
            r2->next=NULL;
            r = reverseList(r);
            if(!head)
                head=r;
            else
                rp->next=r;
            r2=r;
            while(r2->next)
                r2=r2->next;
                r2->next=cur;
            rp=r2;
            c=0;
        }
        return head;
    }
};