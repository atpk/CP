class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i, j=0, n=nums.size();

        if(n==0)
            return 0;
        
        for(i=1; i<n; i++) {
            if(nums[i]==nums[j]) {
                continue;
            }
            
            nums[++j] = nums[i];   
        }
        
        return j+1;
//method 2        
//         int n = nums.size();
//         for(int i=n-2; i>=0; i--){
//             if(nums[i]==nums[i+1]){
//                 for(int j=i+1; j<n; j++){
//                     nums[j-1]=nums[j];
//                 }
//                 n--;
//             }
//         }
//         return n;
    }
};