class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod=1,cnt=0;
        for(auto i:nums){
            if(i)prod*=i;
            else cnt++;
        }
        vector<int> ans(nums.size(),0);
        if(cnt>1)
            return ans;
        else if(cnt==1){
            for(int i=0;i<nums.size();i++){
                if(nums[i]==0){
                    ans[i]=prod;
                    break;
                }
            }
        }
        else{
            for(int i=0;i<nums.size();i++)
            ans[i]=prod/nums[i];
        }
        
        return ans;
    }
};