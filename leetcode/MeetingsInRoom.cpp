class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    static bool comp(pair<int,int> a, pair<int, int> b){
        if(a.second==b.second)
            return a.first<b.first;
        
            return a.second<b.second;
    }
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int,int>> meet(n);
        for(int i=0;i<n;i++){
            meet[i]={start[i],end[i]};
        }
        sort(meet.begin(),meet.end(),comp);
        int i=0;
        int j=i+1,cnt=1;
        while(j<n){
            if(meet[i].second < meet[j].first){
                cnt++;
                i=j;
            }
            j++;
        }
        return cnt;
    }
};