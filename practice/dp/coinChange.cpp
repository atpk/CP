// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    long long int count(int a[], int m, int n) {

        // code here.
        sort(a,a+m);
        long long dp[n+1][m+1] = {0};
        
        // Initialize
        for(int i=0;i<=m;i++)dp[0][i] = 1;
        
        // dp
        for(int i=1;i<=n;i++)
        {
            
            for(int j=1;j<=m;j++)
            {
                // cout<<i<<" "<<j<<": ";
                if(a[j-1]<=i){
                    
                    dp[i][j] = dp[i-a[j-1]][j] + dp[i][j-1];
                    // cout<<a[j-1]<<": "<<dp[i-a[j-1]][j]<<" + "<<dp[i][j-1]<<" = "<<dp[i][j];
                }
                else{
                    dp[i][j] = dp[i][j-1];
                    // cout<<a[j-1]<<": "<<dp[i][j-1]<<" = "<<dp[i][j];
                }
                // cout<<endl;
            }
            // cout<<endl;
        }
        
        // for(int i=0;i<=n;i++){
        //     for(int j=0;j<=m;j++)cout<<dp[i][j];
        //     cout<<endl;
        // }
        
        return dp[n][m];
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int arr[m];
        for (int i = 0; i < m; i++) cin >> arr[i];
        Solution ob;
        cout << ob.count(arr, m, n) << endl;
    }

    return 0;
}  // } Driver Code Ends