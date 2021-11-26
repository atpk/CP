#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin>>t;
    
    while (t--) {
        // Input
        int n,i,j,k,total=0;
        cin>>n;
        int a[n],c[2*n + 2]={0};
        for (i=0; i<n; i++) {
            cin>>a[i];
            c[a[i]++]++;
            c[a[i]]++;
        }
        
        for (i=0; i <= 2*n + 1; i++)
            if (c[i])
                total++;
        
        i=0;
        while(c[i]==0)
            i++;
        
        for (i; i <= 2*n + 1; i++) {
            if (c[i] == 1) {
                k = 1;
                while (c[i-k] == 2)
                    k++;
                    
                if (c[i-k] == 1 && c[i-k-1] != 1)
                    total--;
            }
        }
        
        cout<<total<<endl;
    }
}