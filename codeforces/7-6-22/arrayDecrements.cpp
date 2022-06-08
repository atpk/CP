#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);


void solve(){
    //input
    int n;
    cin>>n;
    int a[n],b[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    }
    
    //diff
    int m=0,i=0;
    while (i<n &&  b[i]==0)
    {
        i++;
    }

    if (i<n)
    {
        m = a[i] - b[i];
    }
    else
    {
        cout << "YES" << endl;
        return;
    }

    //check array decremetns
    for (i = 0; i < n; i++)
    {
        if (a[i] < b[i])
        {
            cout << "NO" << endl;
            return;
        }
        
        if (b[i] == 0)
        {
            if (a[i] - b[i] > m)
            {
                cout << "NO" << endl;
                return;
            }
            
        }
        else
        {
            if (a[i] - b[i] != m)
            {
                cout << "NO" << endl;
                return;
            }
        }
        
    }
    
    cout << "YES" << endl;

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