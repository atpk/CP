#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
  int n=5;
  int i,j,m,t;
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      cin>>t;
      if(t==1){
        m=abs(3-i)+abs(3-j);
      }
    }
  }
  cout<<m;
  return 0;
}