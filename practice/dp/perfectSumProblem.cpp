// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes here
        long long a[sum+1][n+1]={0};
        
        // Initialize
        int cnt=0;
        a[0][0]=1;
        for(int i=1;i<=n;i++)
        {
            if(arr[i-1]==0)cnt++;
            a[0][i]=pow(2,cnt);
        }
        
        // DP
        for(int i=1;i<=sum;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(arr[j-1]<=i)
                    a[i][j] = a[i-arr[j-1]][j-1] + a[i][j-1];
                else
                    a[i][j] = a[i][j-1];
                    
                a[i][j] = a[i][j]%1000000007;
            }
        }
        
        // cout << a[sum][n] << " " << a[sum][n]%1000000007 << endl;
        return a[sum][n]%1000000007;
	}
	  
};

// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}
  // } Driver Code Ends