#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);


void solve(){
    //input
    int n;
    cin >> n;

    int a[n],s=0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
    }

    if (s%2)
    {
        cout << "-1" << endl;
        return;
    }

    if (s == 0)
    {
        cout << "0" << endl;
        return;
    }
    
    
    //solve
    sort(a,a+n);

    
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