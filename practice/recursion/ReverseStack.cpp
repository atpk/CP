#include <bits/stdc++.h>
using namespace std;

void rev(stack<int>& a){
  if(a.empty())return;

  int n=a.top();
  a.pop();
  rev(a);
  stack<int> b;
  while(!a.empty()){
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

  if(n<2){
    cout<<"empty stack"<<endl;
    return 0;
  }
  rev(a);

  while(!a.empty()){
    cout<<a.top()<<endl;
    a.pop();
  }

	return 0;
}