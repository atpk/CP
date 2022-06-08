#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int i,j,k;
        int x=n/3;
        // cout<<x<<endl;
        switch (n%3)
        {
        case 0:
            i=x+1;
            j=x;
            k=x-1;
            break;
        
        case 1:
            i=x+2;
            j=x;
            k=x-1;
            break;

        default:
            i=x+2;
            j=x+1;
            k=x-1;
            break;
        }

        cout<<j<<" "<<i<<" "<<k<<endl;
    }
    return 0;
}