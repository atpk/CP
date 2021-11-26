#include <bits/stdc++.h>
using namespace std;

int present(int n, int d)
{
    int i;
    while(n>0){
        i=n%10;
        if(i==d)
            return 1;
        n=n/10;
    }
    return 0;
}

int isLucky(int n, int d)
{
    int a,i,j;
    if(n>=10*d || n%d==0 || present(n,d))
        return 1;
    j=n%d;
    for(i=1;i<10 && j<n;i++){
        j+=d;
        if(present(j,d))
            return 1;
    }
    return 0;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int q,d,i,j;
        cin>>q>>d;
        int a[q];
        for(i=0;i<q;i++){
            cin>>a[i];
            j=isLucky(a[i],d);
            if(j==1)
                std::cout << "YES" << std::endl;
            else
                std::cout << "NO" << std::endl;
        }
    }
    
    return 0;
}