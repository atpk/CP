#include <bits/stdc++.h>
using namespace std;

void del(stack<int>& a, int k){
  if(k==0){
    a.pop();
    return;
  }

  int n=a.top();
  a.pop();
  del(a,k-1);
  a.push(n);
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
  del(a, n/2);

  while(!a.empty()){
    cout<<a.top()<<endl;
    a.pop();
  }

	return 0;
}