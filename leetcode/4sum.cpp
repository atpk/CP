class Solution {
public:
     void twoSum(vector<vector<int> >& resf, vector<int>& nums, int target, int a, int b, int t1, int t2) {
        int t;
        while(a<b){
            t = nums[a]+nums[b];
            if(t==target){
                vector<int> res;
                res.push_back(nums[a]);
                res.push_back(nums[b]);
                // cout<<target<<" "<<nums[a]<<" "<<nums[b]<<endl;
                res.push_back(t1);
                res.push_back(t2);
                resf.push_back(res);
                a++;
                while(a<b && nums[a]==nums[a-1])// && a<b)
                    a++;
                b--;
                while(b>a && nums[b]==nums[b+1])// && b>a)
                    b--;
            }
            else if(t<target){
                a++;
                while(a<b && nums[a]==nums[a-1])// && a<b)
                    a++;
            }
            else{
                b--;
                while(b>a && nums[b]==nums[b+1])// && b>a)
                    b--;
            }
        }
    }
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size(),k;
        vector<vector<int> > res;
        sort(nums.begin(),nums.end());
        int i=0,j;
        while(i<n){
            j=i+1;
            while(j<n){
                // cout<<"i,j :"<<i<<","<<j<<endl;
                k=target-nums[i]-nums[j];
                // cout<<"target "<<k<<endl;
                twoSum(res, nums, k, j+1, n-1, nums[i], nums[j]);
                j++;
                while(j<n && nums[j]==nums[j-1])
                    j++;
            }
            i++;
            while(i<n && nums[i]==nums[i-1])
                i++;
        }
        return res;
    }
};