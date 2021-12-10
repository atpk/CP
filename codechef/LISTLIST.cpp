#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        int a[n],cnt[n+5]={0},maxocc=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            //frequency
            cnt[a[i]]++;
            maxocc=max(maxocc,cnt[a[i]]);
        }
        
        //trivial case
        if(n<2 || maxocc==n){
            cout<<"0"<<endl;
        }
        
        //not possible
        else if(maxocc<2){
            cout<<"-1"<<endl;
        }
        
        else{
            cout<<n-maxocc+1<<endl;
        }
    }
    
    return 0;
}