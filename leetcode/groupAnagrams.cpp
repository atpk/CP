class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>, int> mp;
        int n=strs.size();
        vector<vector<string>> ans;
        for(auto s: strs){
            vector<int> a(26,0);
            for(auto c: s)
                a[c-'a']++;
            if(mp.find(a)==mp.end()){
                mp[a]=ans.size();
                vector<string> v;
                v.push_back(s);
                ans.push_back(v);
            }
            else{
                ans[mp[a]].push_back(s);
            }
        }
        return ans;
    }
};