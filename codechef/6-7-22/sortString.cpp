#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);


void solve(){
    //input
    int n;
    cin>>n;
    string s;
    cin>>s;

    int cnt;
    char last;
    if (s[0]=='0')
    {
        cnt=0;
        last=s[0];
    }
    else
    {
        cnt = 1;
        last = s[0];
    }
    
    for (int i = 0; i < n; i++)
    {
        if(s[i] != last)
        {
            last = s[i];
            if(last=='1')cnt++;
        }
    }
    cnt--;
    if(s[n-1]=='0')cnt++;
    
    // cout<<x<<" "<<y<<endl;
    cout << cnt << endl;

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