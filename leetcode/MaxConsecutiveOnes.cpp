class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int max=0,streak=0;
        for(int i=0;i<n;i++){
            if(nums[i]) {
                streak++;
                if(streak>max)
                    max=streak;
            }
            else
                streak=0;
        }
        return max;
    }
};