#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll abso(ll a, ll b){
    if(a<b)
    return b-a;
    
    return a-b;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,temp;
        cin>>n;
        vector<ll> a;
        vector<ll> b;
        for(ll i=0;i<n;i++){
            cin>>temp;
            a.push_back(temp);
        }
        for(ll i=0;i<n;i++){
            cin>>temp;
            b.push_back(temp);
        }
        ll ans=min(abso(a[0],b[0])+abso(a[n-1],b[n-1]),abso(a[0],b[n-1])+abso(a[n-1],b[0]));
        ll a1min=INT_MAX,a2min=INT_MAX,b1min=INT_MAX,b2min=INT_MAX;
        for(int i=0;i<n;i++)a1min=min(a1min,abso(a[0],b[i]));
        for(int i=0;i<n;i++)a2min=min(a2min,abso(a[n-1],b[i]));
        for(int i=0;i<n;i++)b1min=min(b1min,abso(b[0],a[i]));
        for(int i=0;i<n;i++)b2min=min(b2min,abso(b[n-1],a[i]));
        ans=min(ans,a1min+a2min+b1min+b2min);
        cout<<ans<<endl;
    }

    return 0;
}