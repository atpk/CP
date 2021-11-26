#include <bits/stdc++.h>
using namespace std;
typedef long long int in;
int lcm(int n1,int n2){
    int hcf, temp, lcm;
    hcf = n1;
    temp = n2;
    
    while(hcf != temp)
    {
        if(hcf > temp)
            hcf -= temp;
        else
            temp -= hcf;
    }

    lcm = (n1 * n2) / hcf;
    
    return lcm;
}
int main()
{
    int t;
    cin>>t;
    while(t--) {
        in d,i,n[4],k=0,j=1;
        cin>>d;
        while(k<3){
            n[k]=j;
            k++;
            j+=d;
        }
        in a=n[1]*n[2];
        if(a-n[2]<d)
            a=lcm(a,j);
        cout<<a<<endl;
    }
}