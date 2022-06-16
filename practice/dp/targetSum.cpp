class Solution {
public:
    int perfectSum(vector<int>& arr, int &sum)
	{
        // Your code goes here
        int n = arr.size();
        long long a[1002][22]={0};
        // memset( a, 0, (sum+1)*(n+1)*sizeof(int) );
        
        // Initialize
        int cnt=0;
        a[0][0]=1;
        for(int i=1;i<=n;i++)
        {
            if(arr[i-1]==0)cnt++;
            a[0][i]=pow(2,cnt);
        }
        
        // DP
        for(int i=1;i<=sum;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(arr[j-1]<=i)
                    a[i][j] = a[i-arr[j-1]][j-1] + a[i][j-1];
                else
                    a[i][j] = a[i][j-1];
                    
                // a[i][j] = a[i][j]%1000000007;
            }
        }
        
        // cout << a[sum][n] << " " << a[sum][n]%1000000007 << endl;
        // return a[sum][n]%1000000007;
        return a[sum][n];
	}
    
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum=0;
        for(auto i:nums)sum+=i;
        
        if(abs(target) > sum)
            return 0;
        
        int s = sum+abs(target);
        
        if(s%2==0)
        {
            s /= 2;
            return perfectSum(nums, s);
        }
        
        return 0;
    }
};