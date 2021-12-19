// { Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    bool isValid(int a[], int n, int m, int k){
      int sum=0,total=0;
      int i=0;
      while(i<n){
        if(a[i]>k)return false;
        if(sum+a[i]>k){
          total++;
          // if(total>m)return false;
          sum=a[i];
        }
        else sum+=a[i];
        i++;
      }
      total++;
      // cout<<"______"<<k<<" "<<total<<endl;
      if(total>m)return false;

      return true;
    }
    
    int maxint(int a[], int n){
        int maxi=a[0];
        for(int i=0;i<n;i++)maxi=max(maxi,a[i]);
        return maxi;
    }

    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        //code here
        if(N<M)return -1;
        if(N==M)return maxint(A, N);
        
        int start=A[N-1],end=0;
        for(int i=0;i<N;i++)end+=A[i];
        int res=-1;
        
        while(start<=end){
          // cout<<"h"<<start<<" "<<end<<endl;
          int mid = start + (end-start)/2;

          if(isValid(A, N, M, mid)){
            res=mid;
            end=mid-1;
          }
          else start=mid+1;
        }

        return res;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}
  // } Driver Code Ends