#include<bits/stdc++.h>
using namespace std;

int next(int i){
  int a[]={3,5,7,11,13,17,19,23,29,31,37,41,43,47,57,59};
  if(i<16)
    return a[i];
  else
    return a[0];
}

int main(){
  int t;
  cin>>t;

  while(t--){
    int n;
    cin>>n;
    int a,b,c;

    if(n%2==0){
      c=1;
      a=n/2;
      b=a-1;
    }
    else{
      int x=3;
      int i=0;
      c=1;
      while(n%x==1){
        x=next(++i);
        if(x==3)
          break;
      }
      a=x;
      b=n-x-1;
    }
    
    cout<<a<<" "<<b<<" "<<c<<endl;
  }

  return 0;
}