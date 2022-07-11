#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);


void solve(){
    //input
    int n,k;
    cin >> n >> k;

    map<int,int> mp,ml;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (mp.find(a[i]) == mp.end())
        {
            mp[a[i]] = i;
            ml[a[i]] = i;
        }
        else
        {
            ml[a[i]] = i;
        }
        
    }
    
    while (k--)
    {
        int a,b;
        cin >> a >> b;
        if (mp.find(a)==mp.end() || mp.find(b)==mp.end())
        {
            cout << "NO" << endl;
        }
        else
        {
            if (mp[a]<ml[b])
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
            
        }
        
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