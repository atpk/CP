#include<bits/stdc++.h>
using namespace std;
typedef long long int in;
int main(){
    in t;
    cin>>t;
    while(t--){
        in n;
        cin>>n;
        in s=sqrt(n),i=2,k=1;
        in a[s];
        a[0]=1;
        while(i<=s){
            if(n%(i*i)==0 && i%a[k-1]==0){
                a[k]=i;
                k++;
                n/=i;
                s=sqrt(n);
                continue;
            }
            i++;
        }
        cout<<k<<endl;
        for(i=1;i<k;i++)cout<<a[i]<<" ";
        cout<<n<<endl;
    }
}