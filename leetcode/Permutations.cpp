#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> ans;
    
    void each(vector<int> nums, vector<int> inter){
        if(nums.size()==0){
            ans.push_back(inter);
            return;
        }
        
        int t;
        for(int i=0;i<nums.size();i++){
            t=nums[i];
            nums.erase(nums.begin()+i);
            inter.push_back(t);
            each(nums, inter);
            inter.pop_back();
            nums.insert(nums.begin()+i, t);
        }
        
        return;
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> inter;
        each(nums, inter);
        
        return ans;
    }
};