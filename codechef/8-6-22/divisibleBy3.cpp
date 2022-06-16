#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);


void solve(){
    //input
    int a,b;
    cin >> a >> b;

    if (a%3 == 0 || b%3 == 0)
    {
        cout << 0 <<endl;
        return;
    }
    else if (a%3 == b%3)
    {
        cout << 1 << endl;
        return;
    }
    else
    {
        cout << 2 << endl;
        return;
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