#include <bits/stdc++.h>
using namespace std;

typedef long long int in;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        in n,m,i,j,cost=0;
        cin>>n>>m;
        std::vector<int> c,k;
        for(i=0; i<n; i++) {
            cin>>j;
            k.push_back(j);
        }
        for(i=0; i<m; i++) {
            cin>>j;
            c.push_back(j);
        }
        sort(k.begin(), k.end());
        reverse(k.begin(), k.end());
        j=0;
        for(i=0; i<n; i++) {
            if(k[i]>j) {
                cost+=c[j];
                j++;
            }
            else
                cost+=c[k[i]-1];
        }
        std::cout << cost << std::endl;
    }
}