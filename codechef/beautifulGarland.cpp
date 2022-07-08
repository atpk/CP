#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);


void solve(){
    //input
    string s;
    cin>>s;

    int cnt=0,r=0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == s[(i+1)%s.size()])
        {
            cnt++;
            if(s[i]=='R')r++;
        }
    }
    

    if(cnt == 0 || (cnt == 2 && r == 1))
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    return;
}


int main(){
    FAST1;
    FAST2;
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
}