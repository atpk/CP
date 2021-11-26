#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string a,b,c;
    cin>>a>>b>>c;
    int n1[26]={0},n2[26]={0},i,f=0;
    for(i=0;i<a.length();i++){
        if(a[i]>64 && a[i]<91)
            n1[a[i]-65]++;
    }
    for(i=0;i<b.length();i++){
        if(b[i]>64 && b[i]<91)
            n1[b[i]-65]++;
    }
    for(i=0;i<c.length();i++){
        if(c[i]>64 && c[i]<91)    
            n2[c[i]-65]++;
    }
    for(i=0;i<26;i++){
        if(n1[i]!=n2[i]){
            f=1;
            break;
        }
    }
    if(f==1)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}