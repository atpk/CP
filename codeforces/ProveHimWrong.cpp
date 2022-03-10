#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(pow(3,n-1)>pow(10,9))cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            int ans=1;
            cout<<ans<<" ";
            n--;
            while(n--){
                ans*=3;
                cout<<ans<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}