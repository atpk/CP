#include <bits/stdc++.h>
using namespace std;

int main()
{
    char neww[205];
    int i, k=0, j, n;
    scanf("%s",neww);
    n = strlen(neww);
    for (i=0; i<n; i++) {
        while (i+2 < n && neww[i]=='W' && neww[i+1]=='U' && neww[i+2]=='B') {
            neww[i]='0';
            neww[i+1]='0';
            neww[i+2]='0';
            i=i+2;
        }
    }
    while (neww[k]=='0')
        k++;
    while (neww[k] != '\0') {
        if (neww[k]=='0') {
            printf(" ");
            while (neww[k] != '\0' && neww[k]=='0')
                k++;
        }
        while (neww[k]!='0' && neww[k]!='\0') {
            printf("%c",neww[k]);
            k++;
        }
    }
    
    return 0;
}