#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n[26] = { 0 }, i, j, l, k, m, flag = 0;
    cin >> k;
    
    char s[1005];
    scanf("%s",s);
    
    m = strlen(s);
    for (i = 0; i < m; i++)
        n[s[i]-97]++;
    
    for (i = 0; i < 26; i++) {
        if (n[i] % k != 0) {
            flag = 1;
            break;
        }
        n[i]/=k;
    }
    
    if (flag)
        cout<<-1;
    else {
        for (i = 0; i < k; i++) {
            for (j = 0; j < 26; j++) {
                l = n[j];
                while (l--)
                    printf("%c", j+97);
            }
        }
    }
    
    return 0;
}