#include <bits/stdc++.h> 
using namespace std; 
#define ll long long 

int main() 
{ 
    ll tt; 
    cin >> tt; 
    ll mod = 1e9 + 7; 
    
    while (tt--) 
    { 
        ll n; 
        cin >> n;
        
        ll ans=0; 
        for(int i=1;i<=n;i++) 
        { 
            ll x; cin>> x; 
 
            ll t= abs(x-i); 
            ans=__gcd(ans,t); 
        } 
        cout<<ans<<endl; 
    } 
}