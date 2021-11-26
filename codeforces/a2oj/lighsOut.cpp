#include <iostream>
using namespace std;
int main() {
  int n=3;
  int b[n][n],i,j,t;
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      b[i][j]=0;
    }
  }
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      cin>>t;
      if(t%2==1){
        b[i][j]++;
        if(i-1>=0)b[i-1][j]++;
        if(i+1<3)b[i+1][j]++;
        if(j-1>=0)b[i][j-1]++;
        if(j+1<3)b[i][j+1]++;
      }
    }
  }
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(b[i][j]%2==0)
        cout<<"1";
      else
        cout<<"0";
    }
    cout<<endl;
  }
  return 0;
}