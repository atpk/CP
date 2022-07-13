#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);

bool pairsort(pair<int,int> a, pair<int,int> b) {
    if (a.first==b.first)
        return a.second < b.second;
    
    return a.first < b.first;
}

void solve(){
    //input
    int n,t;
    cin >> n;
    vector<pair<int,int>> a;
    for (int i = 1; i <= n; i++)
    {
        cin >> t;
        if(t < i) 
        {
            a.push_back({t, i});
        }
    }
    
    ll ans =0;
    // sort(a.begin(), a.end(), pairsort);
    for (int i = 0,j=0; i < a.size(); i++)
    {
        cout << a[i].first << "  " << a[i].second << endl;
        // while (a[i].second)
        // {
        //     /* code */
        // }
        
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