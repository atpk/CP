class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size(),j;
        vector<int> res;
        map<int,int> t;
        for(int i=0;i<n;i++){
            j=target-nums[i];
            if(t.find(j)==t.end())
                t[nums[i]]=i;
            else{
                res.push_back(t.find(j)->second);
                res.push_back(i);
                return res;
            }
        }
        return res;
    }
};