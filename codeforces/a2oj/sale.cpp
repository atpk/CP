#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,temp,sum=0;
    cin>>n>>m;
    std::vector<int> a;
    for (i=0;i<n;i++) {
        cin>>temp;
        if (temp<0) {
            temp = abs(temp);
            sum+=temp;
            a.push_back(temp);
        }
    }
    if (a.size()>m) {
        sort(a.begin(), a.end(), greater<int>());
        sum = 0;
        for (i=0;i<m;i++)
            sum+=a[i];
    }
    cout<<sum;
    
    return 0;
}