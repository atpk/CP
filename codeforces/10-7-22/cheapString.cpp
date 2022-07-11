#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);


void solve(){
    //input
    string s;
    int k;
    cin >> s;
    cin >> k;

    int cost = 0;
    vector<int> mp(26, 0);
    for (auto c: s)
    {
        cost += (c-'a'+1);
        mp[c-'a']++;
    }
    
    if (cost <= k)
    {
        cout << s << endl;
    }
    else
    {
        // cout<<mp[4]<<endl;
        for (int i = 25; i >= 0 && cost > k; i--)
        {
            if (mp[i]==0)
            {
                continue;
            }
                
            int x;
            int y = cost-k;
            // if(i==4)cout<<y<<"__";
            y = y%(i+1)==0 ? y/(i+1) : y/(i+1) + 1;
            // if(i==4)cout<<y<<"__"<<mp[i]<<"_";
            x = min(mp[i], y);
            mp[i] -= x;
            cost -= x*(i+1);
            // if(i==4)cout<<x<<" "<<y<<endl;
            // cout << char('a'+i) << " " << mp[i] << " " << cost << endl;
        }
        
        vector<int> nc(26,0);
        for (auto c: s)
        {
            if (nc[c-'a']<mp[c-'a'])
            {
                cout << c;
                nc[c-'a']++;
            }
        }
        cout << endl;
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