#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);


void solve(){
    //input
    int n;
    cin >> n;
    vector<string> s(n);
    map<string, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        m[s[i]]=1;
    }
    
    for (int i = 0; i < n; i++)
    {
        string a="",b=s[i];
        int flag=0;
        for (int j = 0; j < s[i].size()-1; j++)
        {
            a += s[i][j];
            b.erase(b.begin() + 0);
            // cout << a << " " << b << endl;
            if (m[a]>0 && m[b]>0)
            {
                cout << 1;
                flag=1;
                break;
            }
        }
        if(flag==0)cout << 0;
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