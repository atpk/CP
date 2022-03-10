#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll ans=1;
        while(n--)ans*=2;
        ans--;
        cout<<ans<<endl; 
    }

    return 0;
}