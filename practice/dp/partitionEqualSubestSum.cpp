// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        int n=arr.size();
        bool a[sum+1][n+1]={false};
        
        for(int i=0;i<n;i++)a[0][i]=true;
        
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
        
        return a[sum][n];
    }
    
    int equalPartition(int n, int arr[])
    {
        // code here
        int sum=0;
        vector<int> a;
        for(int i=0;i<n;i++)
        {
            a.push_back(arr[i]);
            sum+=arr[i];
        }
        
        if(sum%2 == 0 && isSubsetSum(a,sum/2))
            return 1;
        
        return 0;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}  // } Driver Code Ends