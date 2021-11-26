#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n],i,j,k,max=0,min=101;
    for(i=0;i<n;i++){
        cin>>a[i];
        if(max<a[i]){
            max=a[i];
            j=i;
        }
        if(min>=a[i]){
            min=a[i];
            k=i;
        }
    }
    int sum = j + n-k-1;
    if(j>k)
        sum--;
    cout<<sum;
    return 0;
}