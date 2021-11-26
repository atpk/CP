#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin>>t;
    
    while (t--) {
        // Input
        int n,i,a[55],c[55]={0},j,total=0;
        cin>>n;
        for (i=0; i<n; i++)
            cin>>a[i];
        
        // Diff bases for triangle
        for (i=0; i<n; i++) {
            for (j=i+1; j<n; j++)
                c[abs(a[i]-a[j])]++;
        }
        
        // #diff bases
        for (i=0; i<55; i++) {
            if(c[i])
                total++;
        }
        
        cout<<total<<endl;
    }
}