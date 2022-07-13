#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);


void solve(){
    //input
    int n;
    cin >> n;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    
    int i=0,j=n-1,x=0;
    int ans = 0;

    while (i<j)
    {
        vector<int> a(j-i,0);
        for (int k = i; k < j; k++)
        {
            // cout << s[x][k] << " ";
            if (s[x][k]=='1')
            {
                a[k-i]++;
            }
        }
        // cout << endl;
        for (int k = i; k < j; k++)
        {
            // cout << s[k][n-1-x] << " ";
            if (s[k][n-1-x]=='1')
            {
                a[k-i]++;
            }
        }
        // cout << endl;
        for (int k = j, f = 0; k > i; k--, f++)
        {
            // cout << s[n-1-x][k] << " ";
            if (s[n-1-x][k]=='1')
            {
                a[f]++;
            }
        }
        // cout << endl;
        for (int k = j, f = 0; k > i; k--, f++)
        {
            // cout << s[k][x] << " ";
            if (s[k][x]=='1')
            {
                a[f]++;
            }
        }
        // cout << endl;

        for(auto dd: a){
            // cout << dd << " ";
            ans += min(dd, 4-dd);
        }

        i++;
        j--;
        x++;
    }
    
    
    cout << ans << endl;

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