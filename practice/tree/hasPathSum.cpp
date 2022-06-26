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
    bool sum(TreeNode* root, int targetSum, int curr_sum) {
        curr_sum+=root->val;
        
        if(!root->left && !root->right){
            if(targetSum==curr_sum)
                return true;
            else
                return false;
        }
        
        bool a,b;
        if(root->left)
             a = sum(root->left, targetSum, curr_sum);
        if(root->right)
            b = sum(root->right, targetSum, curr_sum);
        return a||b;
        
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root){
            return sum(root, targetSum, 0);
        }
        else{
            return false;
        }
    }
};