#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pp;

int main()
{
  priority_queue<pp> maxh;
  
  int n,a,k,p;
  cin>>n>>k>>p;
  for(int i=0;i<n;i++){
    cin>>a;
    int t=abs(a-p);
    maxh.push({t, a});
    if(maxh.size()>k)maxh.pop();
  }

  while(k--){
    cout<<maxh.top().second<<" ";
    maxh.pop();
  }

	return 0;
}