#include <bits/stdc++.h>
using namespace std;

bool check(char a, char b){
    if((a=='S' && b=='P') || (a=='R' && b=='S') || (a=='P' && b=='R'))
        return true;

    return false;
}

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        string s;
        cin>>s;

        char ans[n];

        int k=n-1;
        ans[k]=s[k];
        k--;
        while(k>=0){
            char c=s[k];

            int i=k+1,flag=0;
            while(i<n){
                if(c==s[i]){
                    c=ans[i];
                    break;
                }

                if(!check(c,s[i])){
                    c=ans[i];
                    break;
                }

                i++;
            }

            ans[k]=c;
            k--;
        }

        for(int i=0;i<n;i++)
            cout<<ans[i];
            
        cout<<endl;
    }
    
    return 0;
}