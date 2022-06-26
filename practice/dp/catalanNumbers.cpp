// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int prefixStrings(int n)
	{
	    long long a[n+1] = {0};
	    
	    // catalan numbers;
	    
	    // init
	    a[0] = 1;
	    a[1] = 1;
	    int mod = 1000000007;
	    
	    // dp
	    for (int i=2; i<=n; i++)
	    {
	        for (int j=0; j<i; j++)
	        {
	            a[i] += ((a[j]%mod)*(a[i-1-j]%mod))%mod;
	        }
	    }
	    
	    return a[n]%mod;
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

       

        Solution ob;
        cout << ob.prefixStrings(n);
	    cout << "\n";
	     
    }
    return 0;
}
  // } Driver Code Ends