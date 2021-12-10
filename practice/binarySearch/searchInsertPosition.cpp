class Solution {
public:
    bool found = false;
    int res=0;
    int binarySearch(vector<int>& nums, int start, int end, int key){
            if(start>end)
                return -1;

            int mid = start + (end-start)/2;

            if(key==nums[mid]){
                found = true;
                return mid;
            }

            if(key<nums[mid]){
                return binarySearch(nums, start, mid-1, key);
            }
            else{
                res = max(mid, res);
                return binarySearch(nums, mid+1, end, key);
            }
    }
    
    int searchInsert(vector<int>& nums, int target) {
        if(target<nums[0])return 0;
        
        int ans = binarySearch(nums, 0, nums.size()-1, target);
        
        if(found)return ans;
        else return res+1;
    }
};