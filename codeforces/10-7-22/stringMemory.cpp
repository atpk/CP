#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);


void solve(){
    //input
    string s;
    cin >> s;

    int i=0,n=s.size();
    int ans=0;
    while (i<n)
    {
        map<char, int> m;
        while (i<n && m.size()<=3)
        {
            if (m.find(s[i])==m.end())
            {
                m[s[i]]=1;
            }
            i++;
        }
        if(m.size()==4)i--;
        ans++;
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