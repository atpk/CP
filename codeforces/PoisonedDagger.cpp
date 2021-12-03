#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define M 1000000007
int main()
{
    //fast i/o
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    ll int t;
    cin>>t;
    
    while(t--)
    {
        ll n,h;
        cin>>n>>h;
        ll int a[n],b[n-1],x=0,mm=0,nn=INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            mm=max(mm,a[i]);
            nn=min(nn,a[i]);
            
            //diff of two attacks
            if(i>0)
            b[x]=a[i]-a[i-1],x++;
        }
        
        sort(b,b+x);
        
        // find limits for k assuming k=b[i]
        ll int sum=0,d=0,z=-1;
        for (int i = 0; i < x; i++)
        {
            sum=d;
            sum+=(n-i)*b[i];
            if(sum>=h)
            {
                z=i;
                break;
            }
            d+=b[i];
        }
        
        //calculate k
        if(z!=-1)
        {
            h-=d;
            ll int y=h/(n-z)+!((h%(n-z))==0);
            cout<<y<<endl;
        }
        else
        {
            h-=mm-nn;
            cout<<h<<endl;
        }
    }
}