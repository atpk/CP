#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
  int n,t,i,j,k;
  cin>>n>>t;
  char a[n];
  for(i=0;i<n;i++)
    cin>>a[i];
  for(i=0;i<t;i++){
    for(j=0;j<n-1;j++){
      if(a[j]=='B'&& a[j+1]=='G'){
        a[j]='G';
        a[j+1]='B';
        j++;
      }
    }
  }
  for(i=0;i<n;i++)
    cout<<a[i];
  return 0;
}