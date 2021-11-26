#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int k;
    cin >> k;
    while (k--) {
        int n,W;
        cin >> n >> W;
        
        if (W%2 == 1)
            W++;
        int min = W/2;
        
        int temp;
        int a[n], j=0;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> temp;
            if (sum+temp > W)
                continue;
            else if (temp >= min) {
                sum = temp;
                a[0] = i+1;
                j = 1;
            }
            else {
                sum += temp;
                a[j] = i+1;
                j++;
            }
        }
        if (sum == 0)
            cout << "-1" << endl;
        else {
            cout << j << endl;
            for (int i = 0; i < j; i++) {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
    
    return 0;
}