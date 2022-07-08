#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);


void solve(){
    //input
    ll n,m;
    cin>>n>>m;
    vector<ll> a(n),b(m);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll j = 0; j < m; j++)
    {
        cin >> b[j];
    }
    
    map<ll,ll> mp;
    // int cnt = 1,i=1,j=1,t=n+m-1;
    // cout << "0 0" << endl;
    map<int,int> m1,m2;
    for (int i=0; i<n; i++)
    {
        m1[a[i]] = i;
    }
    for (int i=0; i<m; i++)
    {
        m2[a[i]] = i;
    }
    
    int cnt = 0, f=0;
    for (auto i: m1)
    {
        for (auto j: m2)
        {
            if(mp.find(i.first + j.first) == mp.end())
            {
                mp[i.first + j.first] = 1;
                cout << i.second << " " << j.second << endl;
                cnt++;
                if (cnt == n+m-1)
                {
                    return;
                }
            }
        }
        
    }
    
    return;
}


int main(){
    FAST1;
    FAST2;
    ll t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}