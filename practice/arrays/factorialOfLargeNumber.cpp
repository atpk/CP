// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution {
public:
    vector<int> factorial(int N){
        // code here
        vector<int> ans,temp;
        ans.push_back(1);
        // ans.push_back(2);
        // ans.push_back(0);
        temp.push_back(1);
        for(int i=2;i<=N;i++){
            long long carry=0,out=0;
            temp.clear();
            for(int j=0;j<ans.size();j++){
                out=i*ans[j] + carry;
                carry=out/10;
                out=out%10;
                temp.push_back(out);
            }
            while(carry){
                temp.push_back(carry%10);
                carry/=10;
            }
            ans.swap(temp);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends