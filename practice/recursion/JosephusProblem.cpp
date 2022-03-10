// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
  public:
    int recursion(vector<int> arr, int curr, int n, int k) {
        if(n==1)return arr[0];
        
        int pos=(curr+k)%n;
        arr.erase(arr.begin()+pos);
        return recursion(arr, pos%n, n-1, k);
    }
    int safePos(int n, int k) {
        // code here
        vector<int> arr;
        for(int i=0;i<n;i++){
            arr.push_back(i+1);
        }
        
        return recursion(arr, 0, n, k-1);
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        
        cin>>n>>k;

        Solution ob;
        cout << ob.safePos(n,k) << endl;
    }
    return 0;
}  // } Driver Code Ends