class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans=nums[0],maxx=nums[0],minn=nums[0];
        
        for(int i=1; i<nums.size(); i++){
            int m=maxx;
            maxx=max(nums[i],max(nums[i]*maxx,nums[i]*minn));
            minn=min(nums[i],min(nums[i]*m,nums[i]*minn));
            
            
            ans=max(ans,maxx);
            // cout<<endl<<ans<<" "<<maxx<<" "<<minn<<endl;
        }
        
        return ans;
    }
};