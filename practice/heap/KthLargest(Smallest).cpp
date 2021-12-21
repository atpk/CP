#include <bits/stdc++.h>
using namespace std;

int main()
{
  priority_queue<int> maxh;
  priority_queue <int, vector<int>, greater<int> > minh;
  
  int n,t,k;
  cin>>n>>k;
  for(int i=0;i<n;i++){
    cin>>t;
    maxh.push(t);
    if(maxh.size()>k)maxh.pop();
    minh.push(t);
    if(minh.size()>k)minh.pop();
  }
  cout<<maxh.top()<<" "<<minh.top();

	return 0;
}