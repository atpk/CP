/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head)
            return NULL;
        
        vector<int> v;
        vector<int> r;
        Node* cur=head;
        Node* temp=NULL;
        while(cur){
            v.push_back(cur->val);
            if(cur->random){
                temp=head;
                int i=0;
                while(temp!=cur->random){
                    temp=temp->next;
                    i++;
                }
                r.push_back(i);
            }
            else
                r.push_back(-1);
            cur=cur->next;
        }
        
        Node* res=NULL;
        Node* f=NULL;
        int i,n=v.size();
        for(i=0;i<n;i++){
            Node* t = new Node(v[i]);
            if(!res){
                res=t;
                f=res;
            }
            else{
                res->next=t;
                res=res->next;
            }
        }
        res=f;
        for(i=0;i<n;i++){
            if(r[i]>=0){
                res->random=NULL;
                
            }
            else{
                Node* t = f;
                while(r[i]--)
                    t=t->next;
                res->random=t;
            }
        }
        return f;
    }
};