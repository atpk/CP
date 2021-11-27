class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> p;
        vector<int> t;
        t.push_back(1);
        p.push_back(t);
        if(n==1)
            return p;
        for(int i=1;i<n;i++){
            t.push_back(1);
            for(int j=1;j<i;j++){
                t[j]=p[i-1][j-1]+p[i-1][j];
            }
            p.push_back(t);
        }
        return p;
    }
};