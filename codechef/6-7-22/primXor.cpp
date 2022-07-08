#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);


void solve(){
    //input
    int a,b;
    cin>>a>>b;

    int c=a^b,p1=2^a,p2=2^b,p3=2^c;

    vector<int> arr = {2};
    if(p1&1)arr.push_back(p1);
    if(p2&1)arr.push_back(p2);
    if(p3&1)arr.push_back(p3);
    sort(arr.begin(),arr.end());
    for_each(arr.begin(),
            arr.end(),
            [](const auto& elem) {
                cout << elem << " ";
            });cout<<endl;

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