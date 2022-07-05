class Solution {
public:
    int dp[1005][1005];
    
    // recursive approach + memorization
    int longestCommonSubstr (string s1, string s2, int n, int m)
    {
        // your code here
        if(n<1 || m<1)
            return 0;
        
        if(dp[n][m] != -1)
            return dp[n][m];
        
        if(s1[n-1] == s2[m-1])
        {
            return dp[n][m] = 1+longestCommonSubstr(s1,s2,n-1,m-1);
        }
        
        return dp[n][m] = max(longestCommonSubstr(s1,s2,n-1,m),longestCommonSubstr(s1,s2,n,m-1));
    }
    
    int longestCommonSubsequence(string s1, string s2) {
        int n=s1.size(),m=s2.size();
        memset(dp,-1,sizeof(dp));

        // longestCommonSubstr(s1, s2, n, m);
        
        // dp top-down verison
        
        // init
        for(int i=0;i<=n;i++)dp[i][0]=0;
        for(int i=0;i<=m;i++)dp[0][i]=0;
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(s1[i-1]==s2[j-1])
                    dp[i][j] = 1 + dp[i-1][j-1];
                
                else
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }

        return dp[n][m];
    }
};