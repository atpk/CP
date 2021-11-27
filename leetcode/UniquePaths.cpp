class Solution {
public:
    int M,N;
    int a[105][105];
    void init() {
        for(int i=0; i<M; i++){
            a[i][N]=1;
        }
        for(int i=0;i<N;i++) {
            a[M][i]=1;
        }
    }
    int count(int i, int j) {
        // Base conditions
        if(i>=M && j>=N)
            return 0;
        // DP logic
        if(a[i][j])
            return a[i][j];
        else{
            a[i][j]=count(i+1,j) + count(i, j+1);
            return a[i][j];
        }
    }
    
    int uniquePaths(int m, int n) {
        if(m==1 && n==1)
            return 1;
        
        M=m-1;
        N=n-1;
        init();
        return count(0, 0);
    }
};