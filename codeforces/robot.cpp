#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int step=abs(x-y);
        if(step)
            step=step+x+y-1;
        else
            step=x+y;
        cout<<step<<endl;
    }
}