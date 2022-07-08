#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);


void solve(){
    //input
    ll t,n,s;
    cin >> t >> n >> s;

    ll ni;
    ni = s/n;

    if (ni>t)
    {
        cout << t*n*n;
    }
    else
    {
        if (ni == t)
        {
            cout << t*n*n;
        }
        else
        {
            cout << ni*n*n + (s%n)*(s%n);
        }
        
    }
    
    cout << endl;

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