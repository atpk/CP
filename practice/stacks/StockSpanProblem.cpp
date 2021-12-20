// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       vector<int> ans;
       stack<int> pr,span;
       
       ans.push_back(1);
       pr.push(price[0]);
       span.push(1);
       for(int i=1; i<n; i++){
           int temp=1;
           while(!pr.empty()){
               if(pr.top()>price[i])break;
               else{
                   temp+=span.top();
                   span.pop();
                   pr.pop();
               }
           }
           pr.push(price[i]);
           span.push(temp);
           ans.push_back(temp);
       }
       return ans;
    }
};



// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
  // } Driver Code Ends