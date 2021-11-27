class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int i,j,t,n=intervals.size();
        //sort intervals using start time
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(intervals[i][0]>intervals[j][0]){
                    t=intervals[i][0];
                    intervals[i][0]=intervals[j][0];
                    intervals[j][0]=t;
                    t=intervals[i][1];
                    intervals[i][1]=intervals[j][1];
                    intervals[j][1]=t;
                }
            }
        }
        //merge
        vector<vector<int> > res;
        res.push_back(intervals[0]);
        j=0;
        for(i=1;i<n;i++){
            if(res[j][1]>=intervals[i][0]){
                if(res[j][1]<intervals[i][1])
                    res[j][1]=intervals[i][1];
            }
            else{
                res.push_back(intervals[i]);
                j++;
            }
        }
        return res;
    }
};