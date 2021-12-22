#include <bits/stdc++.h>
using namespace std;

void sort(stack<int>& a){
  if(a.empty())return;

  stack<int> b;
  int n = a.top();
  a.pop();
  sort(a);
  while(!a.empty() && a.top()>n){
    b.push(a.top());
    a.pop();
  }
  a.push(n);
  while(!b.empty()){
    a.push(b.top());
    b.pop();
  }
  return;
}

int main()
{
  stack<int> a;
  int n,t;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>t;
    a.push(t);
  }

  sort(a);

  while(!a.empty()){
    cout<<a.top()<<endl;
    a.pop();
  }

	return 0;
}