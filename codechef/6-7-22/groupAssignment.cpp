#include <bits/stdc++.h>
using namespace std;

long long int mod = 10e9 + 7;

int main()
{
    long long int t;
    cin >> t;
    while (t--){
    
        int n;
        cin >> n;
        int a[n];
        map<int,int> mp;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }

        string ans ="YES";

        for(auto it:mp){
            if(it.second%it.first!=0){
                ans="NO";
                break;
                
            }
        }
        cout<<ans<<endl;
    }
    
}