class Solution {
public:
    int merge(vector<int> nums, int low, int mid, int high){
        int i=low, j=mid;
        int count=0;
        for(;i<mid;i++){
            while(j<=high && nums[i]>2LL*nums[j])
                j++;
            count += (j-mid);
        }
        i=low;
        j=mid;
        vector<int> temp;
        while(i<mid && j<=high){
            if(nums[i]<nums[j])
                temp.push_back(nums[i++]);
            else
                temp.push_back(nums[j++]);
        }
        while(i<mid){
            temp.push_back(nums[i]);
            i++;
        }
        while(j<=high){
            temp.push_back(nums[j]);
            j++;
        }
        for(i=low;i<=high;i++){
            nums[i]=temp[i-low];
        }
        return count;
    }
    int mergesort(vector<int> nums, int low, int high){
        if(low>=high)
            return 0;
        int mid = (low+high)/2;
        int count = mergesort(nums, low, mid);
        count += mergesort(nums, mid+1, high);
        count += merge(nums, low, mid+1, high);
        return count;
    }
    int reversePairs(vector<int>& nums) {
        return mergesort(nums, 0, nums.size()-1);
    }
};