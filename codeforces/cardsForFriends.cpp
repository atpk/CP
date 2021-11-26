#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int w,h,n,i,total=1,flag=0;
        cin>>w>>h>>n;
        while(total<n) {
            if(w%2 == 0)
                w/=2;
            else if(h%2 == 0)
                h/=2;
            else {
                flag=1;
                break;
            }
            total*=2;
        }
        if(flag)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}
