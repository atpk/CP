// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:
    bool checkPal(string s, int start, int end){
        for(int i=start,j=end;i<j;i++,j--){
            if(s[i]!=s[j])
                return false;
        }
        return true;
    }
    string longestPalin (string S) {
        // code here
        int n = S.size();
        int m=1,st=0,end=0;
        for(int i=0;i<n;i++){
            int flag=0;
            for(int j=n-1;j>=0 && j-i+1>m;j--){
                if(checkPal(S,i,j)){
                    flag=1;
                    if(m<j-i+1){
                        m=j-i+1;
                        st=i;
                        end=j;
                    }
                }
                if(flag)break;
            }
        }
        
        string ans;
        for(int i=st;i<=end;i++){
            ans.push_back(S[i]);
        }
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends