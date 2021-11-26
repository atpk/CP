#include <bits/stdc++.h>
using namespace std;

int maxSubArraySum(int a[], int size) 
{ 
    int max=a[0],temp=0;
    for (int i = 0; i < size; i++) 
    { 
       temp+=a[i];
       if(temp>max)
            max=temp;
    } 
    return max; 
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m,i,maxr,maxb,j,k,temp;
        cin>>n;
        int r[n];
        for(i=0; i<n; i++)
            cin>>r[i];
        cin>>m;
        int b[m];
        for(i=0; i<m; i++)
            cin>>b[i];
        maxr=maxSubArraySum(r, n);
        maxb=maxSubArraySum(b, m);
        int max;
        if(maxr<0 && maxb<0){
            cout<<0<<endl;
            continue;
        }
        if(maxr<0)
            max=maxb;
        else if(maxb<0)
            max=maxr;
        else
            max=maxr+maxb;
        cout<<max<<endl;
    }
    return 0;
}