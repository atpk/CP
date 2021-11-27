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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next || k==0)
            return head;
        
        ListNode *r1=head,*r2=head;
        int n=0;
        ListNode* cur=head;
        while(cur){
            n++;
            cur=cur->next;
        }
        k=k%n;
        if(k==0)
            return head;
        while(k--)
            r2=r2->next;
        while(r2->next){
            r2=r2->next;
            r1=r1->next;
        }
        cur=r1->next;
        r1->next=NULL;
        r2->next=head;
        head=cur;
        return head;
    }
};