#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int n;
        scanf("%d",&n);
        long long int a[n];
        for(int i = 0; i < n; i++)scanf("%lld",&a[i]);
        int i = 4,count = 0;
        int l,min1,max1,min2,max2,m;
        count = n - 1;
        for(;i <= n; i += 2){
            for(int j = 0; j <= n - i; j++){
                l = i/2;
                m = 0;
                while(m < l){
                    min1 = a[j +m];
                    max1 = a[j+m];
                    min2 = a[j +m+ l];
                    max2 = a[j +m+ l];
                    for(int k = j+1+m; k < j+l+m; k++){
                        if(min1 > a[k])min1 = k;
                        if(max1 < a[k])max1 = k;
                    }
                    for(int k = j+l+m; k < j+i; k++){
                        if(min1 > a[k])min1 = k;
                        if(max1 < a[k])max1 = k;
                    }
                    for(int k = j; k < j+m; k++){
                        if(min1 > a[k])min1 = k;
                        if(max1 < a[k])max1 = k;
                    }
                    if(min1 > max2 || min2 > max1){
                        count++;
                        break;
                    }
                }
                
            }
        }
        printf("%d\n",count);
    }
    return 0;
}