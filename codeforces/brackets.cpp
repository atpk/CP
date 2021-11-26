#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int l1=0,l2=0,r1=0,r2=0,i,j;
        for(i=0;i<s.length();i++){
            if(s[i]==40)l1++;
            else if(s[i]==41){if(l1>r1)r1++;}
            else if(s[i]==91)l2++;
            else if(s[i]==93){if(l2>r2)r2++;}
            else cout<<s[i];
        }
        int oper=0;
        if(l1>r1)oper+=r1;
        else oper+=l1;
        if(l2>r2)oper+=r2;
        else oper+=l2;
        cout<<oper<<endl;
    }
}