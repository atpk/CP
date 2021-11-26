#include <iostream>
using namespace std;

int main()
{
    int n,m,i,j,k,t,max=0,nmax=1;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    cin>>m;
    for(j=0;j<m;j++){
        cin>>t;
        for(i=0;i<n;i++){
            if(t%a[i]==0){
                k=int(t/a[i]);
                if(k==max)
                    nmax++;
                else if(k>max){
                    max=k;
                    nmax=1;
                }
                else
                    break;
            }
            else{
                if(int(t/a[i])<max)
                    break;
            }
        }
    }
    cout<<nmax;
}