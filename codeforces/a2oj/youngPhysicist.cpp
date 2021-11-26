#include <iostream>
using namespace std;
int main() {
  int t,n,x,y,a=0,b=0,c=0;
  cin>>t;
  while(t--){
    cin>>n>>x>>y;
    a+=n;
    b+=x;
    c+=y;
  }
  if(a==0 && b==0 && c==0)
    cout<<"YES";
  else
    cout<<"NO";
}