#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int a[n],i,j,vall=0,hill=0,k=0,l=0;
        char flag[n];
        for(i=0; i<n; i++)
            cin>>a[i];
        i=1;
        if(a[i-1]>a[i] && a[i+1]>a[i]) {
            vall++;
            flag[i]='v';
        }
        if(a[i-1]<a[i] && a[i+1]<a[i]) {
            hill++;
            flag[i]='h';
        }
        for(i=2; i<n-1; i++) {
            if(a[i-1]>a[i] && a[i+1]>a[i]) {
                vall++;
                flag[i]='v';
                if(flag[i-2]=='v')
                    k=1;
                if(flag[i-1]=='h')
                    l=1;
            }
            if(a[i-1]<a[i] && a[i+1]<a[i]) {
                hill++;
                flag[i]='h';
                if(flag[i-2]=='h')
                    k=1;
                if(flag[i-1]=='v')
                    l=1;
            }
        }
        int total=vall+hill;
        if(k)
            cout<<total-3<<endl;
        else{
            if(l)
                cout<<total-2<<endl;
            else{
                if(total)
                    cout<<total-1<<endl;
                else
                    cout<<total<<endl;
            }
        }
    }
}