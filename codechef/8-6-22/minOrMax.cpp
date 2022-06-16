#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);


void solve(){
    //input
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int mi=a[0],ma=a[0],flag=0;
    for (int i = 1; i < n; i++)
    {
        if(a[i] >= ma)
        {
            ma = a[i];
        }
        else if (a[i] <= mi)
        {
            mi = a[i];
        }
        else
        {
            flag = 1;
            break;
        }
    }
    
    if (flag)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
    
    
    
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