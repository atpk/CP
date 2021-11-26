#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a,sum=0,max=0,i;
        for(i=0;i<n;i++){
            cin>>a;
            if(a>max)max=a;
            sum+=a;
        }
        n--;
        i=0;
        int m=n*max;
        if(m>sum)i=m-sum;
        else{
            i=sum%n;
            if(i)i=n-i;
        }
        cout<<i<<endl;
    }
}