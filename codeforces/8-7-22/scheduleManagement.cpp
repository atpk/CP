#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);


void solve(){
    //input
    int n,m;
    cin >> n >> m;

    vector<int> a(n, 0);
    int x;
    for (int i = 0; i < m; i++)
    {
        cin>>x;
        a[x-1]++;
    }

    vector<pair<int,int>> vp;
    int mx=0,mn=m,t=0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]==0)
            t++;
        else
        {
            vp.push_back({a[i],i});
            mx = max(mx, a[i]);
            // mn = min(mn, a[i]);
        }
    }

    if (mx <= 2)
    {
        cout << mx << endl;
        return;
    }
    
    sort(vp.begin(),vp.end());
    for (auto i: vp)
    {
        cout<<i.first<<" ";
    }
    
    int ans=0;
    while (vp.size()>0)
    {
        
    }
    
    
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