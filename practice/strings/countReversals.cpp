// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Contributed By: Pranay Bansal// } Driver Code Ends



int countRev (string s)
{
    // your code here
    if(s.size()%2==1)return -1;
    int ans=0,x=0;
    for(auto c: s){
        if(c=='{')x++;
        else x--;
        if(x<0){
            x+=2;
            ans++;
        }
    }
    ans+=(x/2);
    return ans;
}