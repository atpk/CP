class Solution {
public:
    int binarySearch(vector<int>& nums, int start, int end){
        if(start>end)
            return -1;
        
        int mid = start + (end-start)/2;
        
        if(nums[mid]<nums[mid-1] && nums[mid]<nums[mid+1])
            return nums[mid];
        
        if(nums[mid]<nums[0]){
            return binarySearch(nums, start, mid-1);
        }
        else{
            return binarySearch(nums, mid+1, end);
        }
    }
    
    int findMin(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums[0];
        if(nums[0]<nums[n-1])return nums[0];
        if(n<3)return nums[1];
        
        if(nums[n-1]<nums[n-2])return nums[n-1];
        
        return binarySearch(nums, 1, nums.size()-2);
    }
};