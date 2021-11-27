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
//best to use 2 pointers with n elements difference
    ListNode* removeNthFromEnd(ListNode* head, int l) {
        int n=0;
        ListNode* cur=head;
        while(cur){
            n++;
            cur=cur->next;
        }
        if(n==1)
            return NULL;
        else if(n==2){
            if(l==1){
                head->next=NULL;
                return head;
            }
            return head->next;
        }
        if(l==n)
            return head->next;
        n=n-l+1;
        if(!n)
            return head;
        cur=head;
        for(int i=2;i<n;i++){
            cur=cur->next;
        }
        if(l==1){
            cur->next=NULL;
            return head;
        }
        ListNode* t=cur->next;
        ListNode* t2=t->next;
        t->next=NULL;
        cur->next=t2;
        return head;
    }
};