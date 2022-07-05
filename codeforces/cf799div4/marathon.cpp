#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);


void solve(){
    //input
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int x=0;
    if(b>a)x++;
    if(c>a)x++;
    if(d>a)x++;
    cout<<x<<endl;
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