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
    int search(vector<int> arr, int s, int e, int v){
        for(int i=s;i<=e;i++){
            if(arr[i]==v)
                return i;
        }
        return -1;
    }
    TreeNode* create(vector<int>& inorder, vector<int>& postorder, int s, int e, int* i) {
        if(s>e)
            return NULL;
        
        TreeNode* t = new TreeNode(postorder[*i]);
        (*i)--;
        
        if(s==e)
            return t;
        
        int a = search(inorder, s, e, t->val);
        t->right = create(inorder, postorder, a+1, e, i);
        t->left = create(inorder, postorder, s, a-1, i);
        
        return t;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int i=inorder.size()-1;
        return create(inorder, postorder, 0, i, &i);
    }
};