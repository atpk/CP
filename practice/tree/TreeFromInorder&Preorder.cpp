// { Driver Code Starts
//

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

 // } Driver Code Ends


/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution{
    public:
    unordered_map<int,int> mp;
   int ind;
   
   Node* helper(int pre[],int in[],int i,int j){
       if(i > j) return (nullptr);
       int d = pre[ind++];
       Node *node = new Node(d);
       if(i == j) return (node);
       int mid = mp[d];
       node->left = helper(pre,in,i,mid-1);
       node->right = helper(pre,in,mid+1,j);
       return (node);
   }
   
   Node* buildTree(int in[],int pre[], int n){
       mp.clear();
       ind = 0;
       for(int i = 0; i < n; i++){
           mp[in[i]] = i;
       }
       return helper(pre,in,0,n-1);
   }
    // Node* build(int in[], int pre[], int n, int i1, int j1, int i2, int j2)
    // {
    //     Node* root = new Node(pre[i2]);
        
    //     if (in[i1] == pre[i2])
    //     {
    //         if (i1==j1)
    //             return root;
    //         // root->left = NULL;
    //         root->right = build(in, pre, n, i1+1, j1, i2+1, j2);
    //     }
    //     else
    //     {
    //         int i=0;
    //         for (i=i1;i<=j1;i++)
    //         {
    //             if (in[i] == pre[i2])
    //             {
    //                 break;
    //             }
    //         }
            
    //         int x = i2+i-i1;
    //         root->left = build(in, pre, n, i1, i-1, i2+1, x);
    //         if(x<j2)
    //             root->right = build(in, pre, n, i, j1, x+1, j2);
    //         // else
    //         //     root->right = NULL;
    //     }
        
    //     return root;
    // }
    // Node* buildTree(int in[],int pre[], int n)
    // {
    //     // Code here
    //     return build(in, pre, n, 0, n-1, 0, n-1);
    // }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}
  // } Driver Code Ends