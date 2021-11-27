class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n1=INT_MIN,n2=INT_MIN,c1=0,c2=0;
        for(auto &it : nums){
            if(it == n1)
                c1++;
            else if(it == n2)
                c2++;
            else if(c1==0){
                n1=it;
                c1++;
            }
            else if(c2==0){
                n2=it;
                c2++;
            }
            else{
                c1--;
                c2--;
            }
        }
        c1=0;
        c2=0;
        for(auto &it : nums){
            if(it==n1)
                c1++;
            else if(it==n2)
                c2++;
        }
        vector<int> res;
        if(c1>nums.size()/3)
        res.push_back(n1);
        if(c2>nums.size()/3)
        res.push_back(n2);
        return res;
    }
};