#include <bits/stdc++.h>
using namespace std;
typedef long long int in;
int main(){
    int t;
    cin>>t;
    while(t--){
        in n;
        cin>>n;
        in count=0;
        while(n!=1){
            in i=n/2,flag=1;
            while(i>1){
                if(n%i==0){
                    n/=i;
                    count++;
                    flag=0;
                    break;
                }
                i--;
            }
            if(flag){
                n--;
                count++;
            }
        }
        cout<<count<<endl;
    }
}