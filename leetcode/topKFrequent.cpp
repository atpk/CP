class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // sort(nums.begin(),nums.end());
        map<int,int> mp;
        for(auto i: nums)
            mp[i]++;
        vector<pair<int,int>> a;
        for(auto i: mp)
            a.push_back({i.second,i.first});
        sort(a.begin(),a.end(),greater <>());
        vector<int> ans;
        for(int i=0;i<k;i++){
            ans.push_back(a[i].second);
        }
        return ans;
    }
};