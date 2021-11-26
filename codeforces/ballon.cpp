#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i < n; i++)scanf("%d",&a[i]);
    if(n == 1)printf("-1");
    else if(n == 2){
        if(a[0] == a[1]){
            printf("-1");
        }
        else{
            printf("1\n");
            printf("1");
        }
    }
    else{
        int sum = 0;
        for(int i = 1; i < n; i++)sum += a[i];
        if(a[0] != sum){
            printf("1\n");
            printf("1");
        }
        else{
            printf("2\n");
            printf("1 2");
        }
    }
}