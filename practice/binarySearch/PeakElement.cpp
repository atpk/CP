class Solution {
public:
    int binarySearch(vector<int>& a, int start, int end){
        int mid = start + (end-start)/2;
        if(mid==0){
            if(a[mid]>a[mid+1])
                return mid;
            else
                return binarySearch(a, mid+1, end);
        }
        else if(mid==a.size()-1){
            if(a[mid]>a[mid-1])
                return mid;
            else
                return binarySearch(a, start, mid-1);
        }
        else{
            if(a[mid]>a[mid-1] && a[mid]>a[mid+1])
                return mid;
            
            if(a[mid]<a[mid+1])
                return binarySearch(a, mid+1, end);
            else
                return binarySearch(a, start, mid-1);
        }
        
        
    }
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==1)return 0;
        return binarySearch(nums, 0, nums.size()-1);
    }
};