// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        // Your code here
        vector<int> next,prev;
        stack<long long> a,b;
        
        for(int i=0; i<n; i++){
            while(!a.empty() && a.top()>=arr[i]){
                a.pop();
                b.pop();
            }
            if(a.empty()){
                prev.push_back(-1);
                a.push(arr[i]);
                b.push(i);
            }
            else{
                prev.push_back(b.top());
                a.push(arr[i]);
                b.push(i);
            }
        }
        
        while(!a.empty()){
            a.pop();
            b.pop();
        }
        
        for(int i=n-1; i>=0; i--){
            while(!a.empty() && a.top()>=arr[i]){
                a.pop();
                b.pop();
            }
            if(a.empty()){
                next.push_back(n);
                a.push(arr[i]);
                b.push(i);
            }
            else{
                next.push_back(b.top());
                a.push(arr[i]);
                b.push(i);
            }
        }
        reverse(next.begin(), next.end());
        
        long long ar=0;
        for(int i=0;i<n;i++){
            ar=max(ar, arr[i]*(next[i]-prev[i]-1));
        }
        
        return ar;
    }
};


// { Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}
  // } Driver Code Ends