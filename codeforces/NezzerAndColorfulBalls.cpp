#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,i,j=0,max=0;
        cin>>n;
        int a[n];
        cin>>a[0];
        for(i=1;i<n;i++){
            cin>>a[i];
            if(a[i]==a[i-1]){
                j++;
                if(max<j)
                    max=j;
            }
            else
                j=0;
        }
        cout<<max+1<<endl;
    }
    
    return 0;
}