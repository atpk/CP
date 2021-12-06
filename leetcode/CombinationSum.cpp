class Solution {
public:
    vector<vector<int>>ans;
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target)
    {
        int minimum = *min_element(candidates.begin(), candidates.end());
        
        if(minimum > target) return ans;
        
        vector<int> inter;
        helper(0, target, candidates,inter);
        return ans; 
    }
    
    void helper(int idx, int target, vector<int>candidates, vector<int>&         inter)
    {      
        //Base case
        if(idx == candidates.size())
        {
            if(target == 0)
                ans.push_back(inter);
            return;
        }

        if(candidates[idx] <= target)
        {
            inter.push_back(candidates[idx]);
            helper(idx, target-candidates[idx], candidates, inter);
            //This will happen after the target was achieved and the vector was pushed into ans, 
			//so that the vector is clean for next combinations to be pushed
            inter.pop_back();
        }		
        
        //idx+1 is done so that combination from next ith index can be checked for
        helper(idx+1, target, candidates, inter);
    }

};