#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);


void solve(){
    //input
    int n;
    cin>>n;

    int d=2;
    cout << d << endl;
    int ans=0;

    int a[n+1]={0};
    a[0]=1;

    int i=1;
    while (i <= n)
    {
        if (a[i] == 0)
        {
            cout << i << " ";
            a[i]=1;
            int j=i*d;
            while (j <= n && a[j]==0)
            {
                cout << j << " ";
                a[j] = 1;
                j *= d;
            }
        }
        i++;
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