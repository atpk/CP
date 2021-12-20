// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        vector<int> ml,mr;
        int temp;
        temp=arr[0];
        ml.push_back(temp);
        for(int i=1;i<n;i++){
            temp=max(temp, arr[i]);
            ml.push_back(temp);
        }
        temp=arr[n-1];
        mr.push_back(temp);
        for(int i=n-2;i>=0;i--){
            temp=max(temp, arr[i]);
            mr.push_back(temp);
        }
        reverse(mr.begin(),mr.end());
        long long ans=0;
        for(int i=0;i<n;i++){
            if(min(ml[i], mr[i])>arr[i])ans+=(min(ml[i],mr[i])-arr[i]);
        }
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends