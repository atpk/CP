#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,b;
    scanf("%d %d",&n,&b);
    int a[n];
    for(int i = 0; i < n; i++)scanf("%d",&a[i]);
    int ceven=0,codd=0,k=0,c[n/2];
    if(a[0]%2 == 0)ceven++;
    else codd++;
    for(int i = 1; i < n; i++){
        if(a[i]%2 == 0)ceven++;
        else codd++;
        if(codd == ceven){
            if(i+1 < n){
                c[k] = abs(a[i+1] - a[i]);
                k++;
            }
            codd = 0;
            ceven = 0;
        }
    }
    sort(c,c+k);
    int sum = 0,count = 0;
    int j = 0;
    while(sum < b && j <= k){
        sum += c[j];
        if(sum <= b)count++;
        j++;
    }
    printf("%d\n",count);
}