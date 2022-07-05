#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);


void solve(){
    //input
    // array to store binary number
    int n;
    cin>>n;

    if (n%2 == 1)
    {
        cout<<"-1"<<endl;
        return;
    }
    

    vector<int> b;
 
    while (n > 0) {
        // storing remainder in binary array
        b.push_back(n % 2);
        n = n / 2;
    }
 
    // printing binary array in reverse order
    // for (auto x:b)
    //     cout<<x;

    vector<int> x,y,z;
    for (int i = 1; i < b.size(); i++)
    {
        if (b[i]==1)
        {
            x.push_back(0);
            y.push_back(1);
            z.push_back(0);
        }
        else
        {
            x.push_back(0);
            y.push_back(0);
            z.push_back(0);
        }
        
    }
    // for (auto a:x)
    //     cout<<a;
    
    // cout<<endl;
    // for (auto a:y)
    //     cout<<a;
    // cout<<endl;

    int base = 1;
    int m=0;
    for (int i = 0; i < x.size(); i++)
    {
        m += x[i]*base;
        base = base * 2;
    }
    cout<<m<<" "<<m<<" ";

    base = 1;
    m=0;
    for (int i = 0; i < y.size(); i++)
    {
        m += y[i]*base;
        base = base * 2;
    }
    cout<<m<<endl;

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