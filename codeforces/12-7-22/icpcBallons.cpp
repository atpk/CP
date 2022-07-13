#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);


void solve(){
    //input
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> a(26,0);
    for(auto c: s) {
        a[c-'A']++;
    }
    int ans=0;
    for (int i = 0; i < 26; i++)
    {
        if (a[i]==0)
        {
            continue;
        }
        else
        {
            ans += a[i]+1;
        }
        
    }
    cout << ans << endl;

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