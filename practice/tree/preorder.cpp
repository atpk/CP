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
    vector<int> arr;
    
    void pre_order(TreeNode* root) {
        if(root) {
            arr.push_back(root->val);

        if(root->left)
            pre_order(root->left);

        if(root->right)
            pre_order(root->right);
        }
        return;
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        
        pre_order(root);
        
        return arr;
    }
};