#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n,i,max=0;
        cin>>n;
        int a[n],score[n]={0};
        for(i=0; i<n; i++)
            cin>>a[i];
        for(i=n-1; i>=0; i--) {
            score[i]=a[i];
            if(i+a[i] < n)
                score[i]+=score[i+a[i]];
            if(max<score[i])
                max=score[i];
        }
        cout<<max<<endl;
    }
}