#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,temp,sum=0,j;
    cin>>n>>m;
    int min = n > m ? m : n;
    for (i=0;i<=min;i++) {
        for (j=0;j<=min;j++) {
            if ((i*i + j == n)&&(i + j*j == m))
                sum++;
        }
    }
    cout<<sum;
    
    return 0;
}