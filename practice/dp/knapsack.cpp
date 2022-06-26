// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       int a[n+1][W+1];
       
       // init
       for (int i=0;i<=n;i++) a[i][0] = 0;
       for (int i=0;i<=W;i++) a[0][i] = 0;
       
       // dp
       for (int i=1;i<=n;i++)
       {
           for (int j=1;j<=W;j++)
           {
                if(wt[i-1]<=j)
                    a[i][j] = max(val[i-1] + a[i-1][j-wt[i-1]], a[i-1][j]);
                else
                    a[i][j] = a[i-1][j];
           }
       }
       
       return a[n][W];
    }
};

// { Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends