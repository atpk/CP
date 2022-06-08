#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);


void solve(){
    //input
    int n,k;
    cin >> n >> k;

    string s;
    cin >> s;

    //solve
    int len=0;
    for (int i = 0; i < k; i++)
    {
        if (s[i] == 'W')
        {
            len++;
        }
    }

    int m = len;
    for (int i = k, j = 0; i < n; i++,j++)
    {
        if (s[j] == 'W')
        {
            len--;
        }
        if (s[i] == 'W')
        {
            len++;
        }
        
        m = min(len, m);
    }
    
    cout << m << endl;

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