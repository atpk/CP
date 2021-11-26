#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n,i,flag=0,s1=0,s2=0,temp;
        cin>>n;
        for(i=0; i<n; i++) {
            cin>>temp;
            if(temp == 1)
                s1++;
            else
                s2++;
        }
        if(s1%2 == 0){
            if(s2%2 == 0)
                cout<<"YES"<<endl;
            else{
                if(s1%4 == 0)
                    cout<<"NO"<<endl;
                else
                    cout<<"YES"<<endl;
            }
        }
        else
            cout<<"NO"<<endl;
    }
}