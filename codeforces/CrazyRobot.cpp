#include<bits/stdc++.h>
using namespace std;
#define ll long long 

ll int neighbours(ll int x, ll int y,ll int n,ll int m,char *a,ll int *c)
{
    ll int count=0;
    if(*((a+m*(x+1))+y)=='.' && *((c+m*(x+1))+y)==0)
    count++;
    if(*((a+m*(x))+y+1)=='.' && *((c+m*(x))+y+1)==0)
    count++;
    if(*((a+m*(x-1))+y)=='.' && *((c+m*(x-1))+y)==0)
    count++;
    if(*((a+m*(x))+y-1)=='.' && *((c+m*(x))+y-1)==0)
    count++;
    if(count<=1)
    return 1;
    else return 0;
}

//dfs from s[i][j]=='L' with only two possible directions
void dfs(ll int x ,ll int y,ll int n,ll int m,char *a,ll int *c)
{
    *((c+m*(x))+y)=1;
    if(*((a+m*(x+1))+y)=='.' && neighbours(x+1,y,n,m,a,c) && *((c+m*(x+1))+y)==0)
    dfs(x+1,y,n,m,a,c);
    if(*((a+m*(x-1))+y)=='.' && neighbours(x-1,y,n,m,a,c)&& *((c+m*(x-1))+y)==0)
    dfs(x-1,y,n,m,a,c);
    if(*((a+m*(x))+y+1)=='.' && neighbours(x,y+1,n,m,a,c)&& *((c+m*(x))+y+1)==0)
    dfs(x,y+1,n,m,a,c);
    if(*((a+m*(x))+y-1)=='.' && neighbours(x,y-1,n,m,a,c)&& *((c+m*(x))+y-1)==0)
    dfs(x,y-1,n,m,a,c);
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        char a[n+2][m+2]={};
        ll int x=0,y=0,c[n+2][m+2]={};
        for (int i = 1; i <=n; i++)
        {
            for (int j = 1; j <=m; j++)
            {
                cin>>a[i][j];
                if(a[i][j]=='L')
                x=i,y=j;
            }
            
        }
        dfs(x,y,n+2,m+2,(char *)a,(ll int *)c);
        for (int i = 1; i <=n; i++)
        {
            for (int j = 1; j <=m; j++)
            {
                if(a[i][j]=='.' && c[i][j]==1)
                cout<<"+";
                else cout<<a[i][j];
            }
            cout<<"\n";
        }
     
    }
}