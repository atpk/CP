class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int i,j;
        //find first decreasing number from last
        for(i=n-1;i>0;i--){
            if(nums[i]>nums[i-1]){
                break;
            }
        }
        i--;
        if(i<0){
            sort(nums.begin(),nums.end());
            return;
        }
        //find the smallest number thereafter greater than current
        for(j=i+1;j<n;j++){
            if(nums[j]<=nums[i]){
                break;
            }
        }
        j--;
        //swap
        swap(nums[i],nums[j]);
        //sort elements afer i
        // i++;
        // sort(nums.begin()+i,nums.end());
        // return;
        //it'll be descending order so reverse
        i++;
        for(j=i;j<=(i+n-1)/2;j++)
            swap(nums[j],nums[n-j+i-1]);
        
        return;
    }
};