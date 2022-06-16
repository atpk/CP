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
    for(int i=0;i<n;i++)cin>>a[i];

    if (n==1)
    {
        cout << "-1" << endl;
        return;
    }

    bool b[n]={false};
    for (int i = 0; i < n-2; i++)
    {
        int j=0;
        while (b[j])
        {
            j++;
        }
        
        if (a[i] != j+1)
        {
            a[i] = j+1;
            b[j] = true;
        }
        else
        {
            j++;
            while (b[j])
            {
                j++;
            }
            a[i] = j+1;
            b[j] = true;
        }
    }
    
    int f,s,j=0;
    while (b[j])
    {
        j++;
    }
    f = j+1;
    j++;
    while (b[j])
    {
        j++;
    }
    s = j+1;
    if (f!=a[n-2] && s!=a[n-1])
    {
        a[n-2] = f;
        a[n-1] = s;
    }
    else
    {
        a[n-2] = s;
        a[n-1] = f;
    }

    for (auto x: a)
    {
        cout << x << " ";
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