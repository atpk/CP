#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);


void solve(){
    //input
    vector<int> a(10005, 0);
    int n;
    cin>>n;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        a[x]++;
    }
    int sum=0;
    for (int i = 0; i < 10005; i++)
    {
        if(a[i]>1)
            sum += (a[i]-1);
    }
    if(sum%2 == 1)sum++;
    cout<<n-sum<<endl;
    
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