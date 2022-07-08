#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);


void solve(){
    //input
    int a,b=0;
    for (int i = 0; i < 4; i++)
    {
        cin >> a;
        if (a == 1)
        {
            b++;
        }
        
    }
    
    if(b==0)cout<<0;
    else if(b<4)cout<<1;
    else cout<<2;
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