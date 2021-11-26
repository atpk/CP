#include <bits/stdc++.h>
using namespace std;

typedef long long int in;

int main()
{
    int t;
    cin>>t;
    while(t--){
        in n;
        cin>>n;
        n+=1;
        in c[n],a[n],b[n],j=0,max=0,k=0,i,l;
        c[0]=-1;
        a[0]=-1;
        b[0]=-1;
        for(i=1;i<n;i++)
            cin>>c[i];
        for(i=1;i<n;i++)
            cin>>a[i];
        for(i=1;i<n;i++)
            cin>>b[i];
        for(i=n-1;i>1;i--){
            l=j-k+c[i]-1-k;
            if(l<c[i]-1)
                j=c[i]-1;
            else
                j=l;
            k=abs(a[i]-b[i]);
            j+=k;
            j+=2;
            if(max<j)
                max=j;
            if(k==0)
                j=0;
        }
        cout<<max<<endl;
    }
    
    return 0;
}