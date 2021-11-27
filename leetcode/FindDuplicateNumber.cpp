class Solution {
    public:
    
    int findDuplicate(vector<int>& nums) {

//         // Lambda function to count how many numbers are less than or equal to 'cur'
//         auto small_or_equal = [&](int cur) {
//             int count = 0;
//             for (auto &num: nums) {
//                 if (num <= cur)
//                     count++;
//             }
//             return count;
//         };
        
//         // 'low' and 'high' represent the range of values of the target
//         int low = 1, high = nums.size();
//         int duplicate = -1;
//         while (low <= high) {
//             int cur = (low + high) / 2;
            
//             if (small_or_equal(cur) > cur) { 
//                 duplicate = cur;
//                 high = cur - 1;
//             } else {
//                 low = cur + 1;
//             }
//         }

//         return duplicate;
        
        int duplicate = -1;
        for (int i = 0; i < nums.size(); i++) {
            int cur = abs(nums[i]);
            if (nums[cur] < 0) {
                duplicate = cur;
                break;
            }
            nums[cur] *= -1;
        }
        
        // Restore numbers
        for (auto& num : nums)
            num = abs(num);
        
        return duplicate;
    }
};