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
    vector<TreeNode*> bst(int st, int end) {
        vector<TreeNode*> arr;
        
        if(st>end) {
            arr.push_back(NULL);
            return arr;
        }
        
        for(int i=st; i<=end; i++) {
            
            vector<TreeNode*> left = bst(st, i-1);
            vector<TreeNode*> right = bst(i+1, end);
            
            for(int j=0; j<left.size(); j++) {
                TreeNode* l = left[j];
                for(int k=0; k<right.size(); k++) {
                    TreeNode* t = new TreeNode(i);
                    TreeNode* r = right[k];
                    t->left=l;
                    t->right=r;
                    arr.push_back(t);
                }
            }
        }
        
        return arr;
    }
    
    vector<TreeNode*> generateTrees(int n) {
        if(n==1){
            TreeNode* t = new TreeNode(1);
            vector<TreeNode*> a;
            a.push_back(t);
            return a;
        }
        return bst(1, n);    
    }
};