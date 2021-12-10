#include <bits/stdc++.h>
using namespace std;

void show(int n, int a){
    while(n--){
        cout<<a<<!a;
    }
    
    return;
}

void endshow(int n, int a){
    while(n--){
        cout<<a<<a<<!a;
    }
    
    return;
}

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,m;
        cin>>n>>m;
        
        if(n==m){
            cout<<n+m+2<<endl;
            show(n+1,1);
            cout<<endl;
        }
        
        else if(abs(n-m)==1){
            cout<<n+m+2<<endl;
            
            int a=0;
            if(n<m)a=1;
            n=max(n,m);
            
            show(n,a);
            cout<<a<<endl;
        }
        
        else{
            int b=min(n,m)+1;
            int c=max(n,m)-b;

            cout<<2*b + 3*c + 1<<endl;

            int a=0;
            if(n<m)a=1;
            
            show(b,a);
            
            endshow(c,a);
            cout<<a<<endl;
        }
    }
    
    return 0;
}