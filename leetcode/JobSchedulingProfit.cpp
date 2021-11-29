#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 

class Solution 
{
    public:
    static bool comp(Job a, Job b){
        return a.profit>b.profit;
    }
    
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        // sort according to deadline and then profit
        sort(arr, arr+n, comp);
        
        for(int i=0;i<n;i++){
            cout<<arr[i].profit<<" ";
        }
        cout<<endl;
        int pro=0,done=0;
        bool slot[n];
        for(int i=0;i<n;i++){
            slot[i]=false;
        }
        for(int i=0;i<n;i++){
            // cout<<arr[i].profit<<" ";
            // for(int i=0;i<n;i++){
            //     cout<<slot[i]<<" ";
            // }
            // cout<<endl;
            for(int j=min(n, arr[i].dead)-1;j>=0;j--){
                if(slot[j]==false){
                    slot[j]=true;
                    done++;
                    pro+=arr[i].profit;
                    break;
                }
            }
        }

        // for(int i=0;i<n;i++){
        //     cout<<slot[i]<<" ";
        // }
        cout<<endl;
        vector<int> res;
        res.push_back(done);
        res.push_back(pro);
        return res;
    } 
};