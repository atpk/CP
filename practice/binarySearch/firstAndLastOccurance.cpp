class Solution {
public:
    int binarySearch(vector<int>& nums, int start, int end, int key){
        if(start>end)
            return -1;
        
        int mid = start + (end-start)/2;
        
        if(key==nums[mid]){
            int a=binarySearch(nums, start, mid-1, key);
            if(a>=0)return a;
            return mid;
        }
        
        if(key<nums[mid]){
            return binarySearch(nums, start, mid-1, key);
        }
        else{
            return binarySearch(nums, mid+1, end, key);
        }
    }
    
    int binarySearch2(vector<int>& nums, int start, int end, int key){
        if(start>end)
            return -1;
        
        int mid = start + (end-start)/2;
        
        if(key==nums[mid]){
            int a=binarySearch2(nums, mid+1, end, key);
            if(a>=0)return a;
            return mid;
        }
        
        if(key<nums[mid]){
            return binarySearch2(nums, start, mid-1, key);
        }
        else{
            return binarySearch2(nums, mid+1, end, key);
        }
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2, -1);
        
        int a = binarySearch(nums, 0, nums.size()-1, target);
        if(a==-1)return ans;
        ans[0]=a;
        a = binarySearch2(nums, 0, nums.size()-1, target);
        ans[1]=a;
        return ans;
    }
};