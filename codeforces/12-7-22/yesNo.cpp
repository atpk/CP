#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);


void solve(){
    //input
    string s;
    cin>>s;
    if(s[0]=='Y' || s[0]=='y'){
        if(s[1]=='e' || s[1]=='E'){
            if (s[2]=='s' || s[2]=='S')
            {
                cout << "YES" << endl;
                return;
            }
            
        }
    }
    cout << "NO" << endl;

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