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
    ListNode* middleNode(ListNode* head) {
        int n=0;
        ListNode* cur=head;
        if(!head || !head->next)
            return head;
        ListNode* cur2=head->next;
        // while(cur){
        //     n++;
        //     cur=cur->next;
        // }
        // n=n/2+1;
        // cur=head;
        // for(int i=1;i<n;i++){
        //     cur=cur->next;
        // }
        while(cur2){
            cur2=cur2->next;
            if(cur2)
                cur2=cur2->next;
            cur=cur->next;
        }
        return cur;
    }
};