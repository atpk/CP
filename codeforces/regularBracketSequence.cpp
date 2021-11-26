#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.length();
        if(n%2==1 || s[0]==')' || s[n-1]=='('){
            cout<<"NO\n";
            continue;
        }
        int i,cl=0,cr=0,m=0;
        for(i=0; i<n; i++){
            if(s[i]=='(')
                cl++;
            else if(s[i]==')')
                cr++;
            else
                m++;
        }
        n = n/2;
        if(cl>n || cr>n || m%2==1){
            cout<<"NO\n";
            continue;
        }
        cout<<"YES\n";
    }
    return 0;
}