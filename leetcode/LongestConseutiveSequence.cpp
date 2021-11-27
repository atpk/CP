class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int,int> a;
        for(auto &it : nums){
            if(a.find(it)==a.end())
                a[it]=1;
        }
        int lc=0,i;
        for(auto &it : nums){
            if(a.find(it-1)==a.end()){
                i=1;
                int t=it+1;
                while(a.find(t)!=a.end()){
                    t++;
                    i++;
                }
                if(i>lc)
                    lc=i;
            }
        }
        return lc;
    }
};