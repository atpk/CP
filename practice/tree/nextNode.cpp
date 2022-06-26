/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    void levelorder(vector<Node*>& a){
        vector<Node*> b;
        int n=a.size();
        
        for(int i=0;i<n-1;i++){
            if(a[i]->left)
                b.push_back(a[i]->left);
            if(a[i]->right)
                b.push_back(a[i]->right);
            a[i]->next = a[i+1];
        }
        
        int i=n-1;
        if(a[i]->left)
            b.push_back(a[i]->left);
        if(a[i]->right)
            b.push_back(a[i]->right);
        a[i]->next = NULL;
        
        if(b.size())
            levelorder(b);
        
        return;
    }

    Node* connect(Node* root) {
        if(root){
            root->next = NULL;
            vector<Node*> a;
            a.push_back(root);
            levelorder(a);
        }
        
        return root;
    }
};