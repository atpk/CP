#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
  char a[205];
  scanf("%s",a);
  int i=0,j;
  while(a[i]!='\0'){
    if(a[i]=='.')
      cout<<0;
    else{
      i++;
      if(a[i]=='.')
        cout<<1;
      else
        cout<<2;
    }
    i++;
  }
  return 0;
}