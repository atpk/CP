#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);


void solve(){
    //input
    int n,m,k;
    cin >> n >> m >> k;
    string a,b;
    cin >> a >> b;

    int na[26]={0},nb[26]={0};
    int i=0,j=0;
    for (auto x: a)
    {
        na[x-'a']++;
    }
    for (auto x: b)
    {
        nb[x-'a']++;
    }
    
    // for (int i = 0; i < 26; i++)
    // {
    //     cout << na[i] << " " << nb[i] << endl;
    // }
    
    string c = "";
    int naa=a.size(),nbb=b.size();
    char add[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int ka=0,kb=0;
    while(naa>0 && nbb>0)
    {
        if (ka==k)
        {
            while (nb[j]==0)
            {
                j++;
            }
            c.push_back(add[j]);
            nb[j]--;
            nbb--;
            kb++;
            ka=0;
        }
        else if (kb==k)
        {
            while (na[i]==0)
            {
                i++;
            }
            c.push_back(add[i]);
            na[i]--;
            naa--;
            ka++;
            kb=0;
        }
        else if (i <= j)
        {
            if (na[i]==0)
            {
                i++;
            }
            else
            {
                c.push_back(add[i]);
                na[i]--;
                naa--;
                ka++;
                kb=0;
            }
        }
        else
        {
            if (nb[j]==0)
            {
                j++;
            }
            else
            {
                c.push_back(add[j]);
                nb[j]--;
                nbb--;
                kb++;
                ka=0;
            }
            
        }
        
        
    }

    // cout << c.size();
    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i];
    }
    
    cout << endl;

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