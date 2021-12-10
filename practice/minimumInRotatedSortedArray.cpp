class Solution {
public:
    int binarySearch(vector<int>& nums, int start, int end){
        if(start>end)
            return nums[0];
        
        int mid = start + (end-start)/2;
        
        int n=nums.size();
        int pre=(n+mid-1)%n;
        int next=(mid+1)%n;
        if(nums[mid]<nums[pre] && nums[mid]<nums[next])
            return nums[mid];
        
        if(nums[mid]<nums[0]){
            return binarySearch(nums, start, mid-1);
        }
        else{
            return binarySearch(nums, mid+1, end);
        }
    }
    
    int findMin(vector<int>& nums) {
        if(nums.size()==1)return nums[0];
        
        return binarySearch(nums, 0, nums.size()-1);
    }
};