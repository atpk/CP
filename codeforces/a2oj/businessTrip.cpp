#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 12, i, j, k;
    std::vector<int> a;
    cin>>k;
    for (i=0; i<n; i++) {
        cin>>j;
        a.push_back(j);
    }
    sort(a.begin(), a.end(), greater<int>());
    j=0;
    i=0;
    while (j<k && i<12) {
        j+=a[i];
        i++;
    }
    if (i>=12) {
        if (j<k)
            i=-1;
    }
    cout<<i;
    
    return 0;
}