// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    
    return temp;
}
// Function to Build Tree
Node* buildTree(string str)
{   
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
    
    // Creating vector of strings from input 
    // string after spliting by space
    vector<string> ip;
    
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
        
    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));
        
    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);
        
    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
            
        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();
            
        // Get the current node's value from the string
        string currVal = ip[i];
            
        // If the left child is not null
        if(currVal != "N") {
                
            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->left);
        }
            
        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
            
        // If the right child is not null
        if(currVal != "N") {
                
            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}

vector<int> reverseLevelOrder(Node* root);

int main()
{

    int t;
    scanf("%d ",&t);
    while(t--)
    {
        string s;
        getline(cin,s);
        Node* root = buildTree(s);
        vector<int> result = reverseLevelOrder(root);
        for (int i = 0; i < result.size(); ++i)
        {
            cout<<result[i]<<" ";
        }
        cout<<endl;
    }
    return 1;
}// } Driver Code Ends


/*   
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
vector<int> reverseLevelOrder(Node *root)
{
    // code here
    vector<vector<int>> t;
    vector<int> ans;
    if(!root)
        return ans;
        
    queue<Node*> a;
    a.push(root);
    int n=1;
    
    // another way: add data to array, (add right node, add left node) to queue
    // reverse array
    while(!a.empty())
    {
        vector<int> temp;
        int x=0;
        while(n--)
        {
            temp.push_back(a.front()->data);
            
            if(a.front()->left != NULL)
            {
                a.push(a.front()->left);
                x++;
            }
            if(a.front()->right != NULL)
            {
                a.push(a.front()->right);
                x++;
            }
            
            a.pop();
        }
        t.push_back(temp);
        n=x;
    }
    
    // cout<<t.size()<<endl;
    // cout<<t[0].size()<<" "<<t[1].size()<<" "<<t[2].size()<<" "<<t[3].size()<<endl;
    for(int i=t.size()-1;i>=0;i--)
    {
        for(int j=0;j<t[i].size();j++)ans.push_back(t[i][j]);
    }
    
    return ans;
}