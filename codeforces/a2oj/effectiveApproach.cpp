#include <iostream>
using namespace std;

int main()
{
    long long int n,m,i,j,k,v=0,p=0;
    cin>>n;
    long long int a[n],c[n+1];
    for(i=0;i<n;i++){
        cin>>a[i];
        c[a[i]]=i;
    }
    cin>>m;
    for(i=0;i<m;i++){
        cin>>k;
        v=v+c[k]+1;
        p=p+n-c[k];
    }
    cout<<v<<" "<<p;
    return 0;
}