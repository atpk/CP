class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i,j,n=nums.size(),k=0,a=0,b=0;
        for(i=0;i<n;i++){
            if(nums[i]==0)
                k++;
            else if(nums[i]==1)
                a++;
            else
                b++;
        }
        a=a+k;
        b=a+b;
        for(i=0;i<k;i++)
            nums[i]=0;
        for(;i<a;i++)
            nums[i]=1;
        for(;i<b;i++)
            nums[i]=2;
    }
};