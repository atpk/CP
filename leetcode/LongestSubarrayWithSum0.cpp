class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        int len=0,i,j,sum=0;
        map<int, int> a;
        a[0]=-1;
        for(i=0;i<n;i++){
            sum+=A[i];
            if(a.find(sum)==a.end())
                a[sum]=i;
            else{
                j=i-a[sum];
                len=max(len,j);
            }
        }
        return len;
    }
};