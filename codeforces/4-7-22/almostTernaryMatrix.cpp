#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);


void solve(){
    //input
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for (int i = 0; i < n; i+=2)
    {
        for (int j = 0; j < m; j+=2)
        {
            if((i+j)%4 == 0)
            {
                a[i][j]=1;
                a[i][j+1]=0;
                a[i+1][j]=0;
                a[i+1][j+1]=1;
            }
            else
            {
                a[i][j]=0;
                a[i][j+1]=1;
                a[i+1][j]=1;
                a[i+1][j+1]=0;
            }
            
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
        
    }
    

    return;
}


int main(){
    FAST1;
    FAST2;
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
}