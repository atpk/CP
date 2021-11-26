#include <iostream>
#include <cstdlib>
using namespace std;
int isdistinct(int n)
{
  int a,b,c,d;
  a=n%10;
  n/=10;
  b=n%10;
  n/=10;
  c=n%10;
  n/=10;
  d=n;
  if(a==b||a==c||a==d||b==c||b==d||c==d)
    return 0;
  else
    return 1;
}
int main() {
  int n,i,j;
  cin>>n;
  n++;
  j=isdistinct(n);
  while(!j){
    n++;
    j=isdistinct(n);
  }
  cout<<n;
  return 0;
}