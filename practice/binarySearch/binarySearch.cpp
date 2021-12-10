class Solution {
public:
    int binarySearch(vector<int>& nums, int start, int end, int key){
        if(start>end)
            return -1;
        
        int mid = start + (end-start)/2;
        
        if(key==nums[mid])
            return mid;
        
        if(key<nums[mid]){
            return binarySearch(nums, start, mid-1, key);
        }
        else{
            return binarySearch(nums, mid+1, end, key);
        }
    }
    
    int search(vector<int>& nums, int target) {
        return binarySearch(nums, 0, nums.size()-1, target);
    }
};