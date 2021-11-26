#include<stdio.h>
using namespace std;
int* ranking(int a[], int n){
    int r[n];
    for(int i = 0; i < n; i++){
        
    }
    int *rank;
    rank = r;
    return rank;
}
int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int n,m;
        scanf("%d%d",&n,&m);
        int r[n],maxr[n]={0},bestrat[n],minr[n],bestrank[n];
        for(int i = 0; i < n; i++)scanf("%d",&r[i]);
        int ch[n][m];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++)scanf("%d",&ch[i][j]);
        }
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                r[i] += ch[i][j];
                if(maxr[i] < r[i]){
                    maxr[i] = r[i];
                    bestrat[i] = j+1;
                }
            }
            int *rank = ranking(r,n);
            for(int i = 0; i < n; i++){
                if(minr[i] > rank[i]){
                    minr[i] = rank[i];
                    bestrank[i] = j+1;
                }
            }
        }
        int count = 0;
        for(int i = 0; i < n; i++){
            if(bestrank[i] != bestrat[i])count++;
        }
        printf("%d\n"count);
    }
    return 0;
}