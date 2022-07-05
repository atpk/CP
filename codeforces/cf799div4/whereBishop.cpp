#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);


void solve(){
    //input
    string s[8];
    vector<int> a(8, 0);
    for (int i = 0; i < 8; i++)
    {
        cin>>s[i];
        for (auto c: s[i])
        {
            if (c == '#')a[i]++;
        }
        
    }
    
    int i=0;
    for (i = 1; i < 7; i++)
    {
        if(a[i]==1 && a[i-1]==2 && a[i+1]==2)break;
    }
    
    int j=0;
    for (j = 0; j < 8; j++)
    {
        if(s[i][j]=='#')break;
    }
    
    cout<<i+1<<" "<<j+1<<endl;

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