#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);


void solve(){
    //input
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] += 20;
    }

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        string s;
        cin >> s;
        for (auto c: s)
        {
            if (c == 'U')
            {
                a[i]--;
            }
            else
            {
                a[i]++;
            }
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << a[i]%10 << " ";
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