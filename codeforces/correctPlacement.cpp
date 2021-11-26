#include <bits/stdc++.h>
using namespace std;
typedef long long int in;


int main()
{
    int t;
    cin>>t;
    while(t--) {
        in n,i,j;
        cin>>n;
        in h[n],w[n],front[n];
        for(i=0; i<n; i++) {
            cin>>h[i]>>w[i];
            front[i]=-1;
            for(j=0; j<i; j++) {
                if(h[i]>h[j] && w[i]>w[j]) {
                    front[i]=j;
                    break;
                }
                if(h[i]>w[j] && w[i]>h[j]) {
                    front[i]=j;
                    break;
                }
            }
        }
        for(i=0; i<n; i++) {
            if(front[i] == -1) {
                for(j=i+1; j<n; j++) {
                    if(h[i]>h[j] && w[i]>w[j]) {
                        front[i]=j;
                        break;
                    }
                    if(h[i]>w[j] && w[i]>h[j]) {
                        front[i]=j;
                        break;
                    }
                }
                if(front[i] == -1)
                    cout<<front[i]<<" ";
                else
                    cout<<front[i]+1<<" ";
            }
            else
                cout<<front[i]+1<<" ";
        }
        cout<<endl;
    }
}