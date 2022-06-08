// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        if(x.size()%2 == 1)return false;
        // Your code here
        int i=0,j=0,k=0;
        int c=1;
        for(int n=0;n<x.size();n++){
            // cout<<x[n]<<" "<<c<<endl;
            switch(x[n]){
                case '{':
                    i+=c;
                    c++;
                    break;
                case '}':
                    c--;
                    i-=c;
                    break;
                case '(':
                    j+=c;
                    c++;
                    break;
                case ')':
                    c--;
                    j-=c;
                    break;
                case '[':
                    k+=c;
                    c++;
                    break;
                case ']':
                    c--;
                    k-=c;
                    break;
                default:
                    break;
            }
        }
        if(i==0 && j==0 && k==0)
            return true;
        return false;
    }

};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends