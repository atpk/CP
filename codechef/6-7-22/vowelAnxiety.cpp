#include <bits/stdc++.h> 
using namespace std; 
#define ll long long 
 
 
 
 
 
 
bool check(char c) 
{ 
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') 
        return true; 
 
    return false; 
} 
 
int main() 
{ 
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
 
    ll tt; cin >> tt; 
    ll mod = 1e9 + 7; 
    while (tt--) 
    { 
 
         ll n; cin >> n; 
 
 
    string s; cin >> s; 
 
    char ans[n]; 
    for(int i=0;i<n;i++) 
        ans[i]=s[i]; 
 
 
    ll j = n - 1; 
 
    while (j >= 0 && !check(s[j])) 
    { 
         
        j--; 
    } 
     
    j--; 
    ll st = 0,end=j,dir=0,ind=j; 
   
   
    while (ind >= 0) 
    { 
        string temp; 
 
        while (ind >= 0) 
        { 
            if (check(s[ind])) 
            { 
 
                temp.push_back(s[ind]); 
                ind--; 
                break; 
            } 
            else 
                temp.push_back(s[ind]); 
 
            ind--; 
        } 
 
        if (dir%2==1) 
        { 
            for (auto it : temp) 
            { 
                ans[end--] = it; 
            } 
        } 
        else 
        { 
            for (auto it : temp) 
            { 
                ans[st++] = it; 
                 
            } 
        } 
        dir++; 
    } 
 
    for(auto i:ans) 
        cout<<i; 
 
    cout<<endl; 
 
 
 
 
 
 
    } 
 
 
}