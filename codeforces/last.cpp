#include <bits/stdc++.h>
using namespace std;

typedef long long int in;

int main()
{
    in t;
    cin>>t;
    while(t--){
        in n,i,j,flag=1;
        cin>>n;
        in a[2*n];
        for(i=0;i<2*n;i++)
            cin>>a[i];
        sort(a,a+(2*n));
        for(i=1;i<2*n;i+=2){
            if(a[i]!=a[i-1] || a[i]%2==1){
                flag=0;
                break;
            }
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    
    return 0;
}