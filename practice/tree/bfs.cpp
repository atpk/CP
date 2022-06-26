/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> arr;
    
    void levelorder(vector<TreeNode*>& a){
        vector<int> t;
        vector<TreeNode*> b;
        int n=a.size();
        for(int i=0;i<n;i++){
            if(a[i]){
                t.push_back(a[i]->val);
                
                if(a[i]->left)
                    b.push_back(a[i]->left);
                if(a[i]->right)
                    b.push_back(a[i]->right);
            }
        }
        
        arr.push_back(t);
        
        if(b.size())
            levelorder(b);
        
        return;
    }
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root){
            vector<TreeNode*> a;
            a.push_back(root);
            levelorder(a);
        }
        
        return arr;
    }
};