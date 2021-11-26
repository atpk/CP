#include <iostream>
using namespace std;

int divsum(int n, int k)
{
    int i=1,j,d;
    if(n%k==0)
        return 1;
    d=n/k;
    d++;
    d*=k;
    j=n;
    while(d>j){
        j+=n;
        i++;
    }
    return i;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k,i=1;
        cin>>n>>k;
        cout<<divsum(n, k)<<endl;
    }
    
    return 0;
}