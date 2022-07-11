#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);


void solve(){
    //input
// [In reply to Rimon Rahaman]
bool ok = false, got = false;
    char ch, ch1;
    cin>>n;
    map<ll,ll> cnt_a,cnt_b;
    fo(0,n)
    {
        cin>>x>>y;
        if(cnt_a[x]==0 and cnt_a[y]==0)
        {
            cnt_a[x]++;
            cnt_a[y]++;
            if(cnt_a[x]>1 or cnt_a[y]>1 ) ok=1;
        }
        else
        {
            cnt_b[x]++;
            cnt_b[y]++;
            if(cnt_b[x]>1 or cnt_b[y]>1 ) ok=1;
        }

    }
    if(ok) cout << "no";
    else cout<<"yes";
    cout<<endl;
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