// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

  public:
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    int sum=0;
	    for(int i=0;i<n;i++)sum+=arr[i];
	    
	    bool a[sum+1][n+1]={false};

        for(int i=0;i<=n;i++)a[0][i]=true;
        
	    for(int i=1;i<=sum;i++)
	    {
	        for(int j=1;j<=n;j++)
	        {
	            if(arr[j-1]<=i)
	                a[i][j] = a[i-arr[j-1]][j-1] || a[i][j-1];
	            else
	                a[i][j] = a[i][j-1];
	        }
	    }
	    
	    int x=sum/2 + 1;
	   // cout<<sum<<" "<<x<<endl;
	    while(x--)
	    {
	       // cout<<x<<endl;
	        if(a[x][n])
	        {
	           // cout<<x<<endl;
	            return abs(sum-2*x);
	        }
	    }
	    
	    return sum;
	} 
};


// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends