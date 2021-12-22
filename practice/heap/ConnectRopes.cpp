#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pp;

int main()
{
  priority_queue<int, vector<int>, greater<int>> minh;

  int n,t;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>t;
    minh.push(t);
  }
  
  int cost=0;
  while(minh.size()>=2){
    t=minh.top();
    minh.pop();
    t+=minh.top();
    minh.pop();
    cost+=t;
    minh.push(t);
  }
  cout<<cost<<endl;

	return 0;
}