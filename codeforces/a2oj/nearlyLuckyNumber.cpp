#include <iostream>
#include <cstring>
using namespace std;
int main() {
  string word;
  cin>>word;
  int i=0,j=0,k=1;
  while(word[i]!='\0'){
    if(word[i]=='4'||word[i]=='7'){
      j++;
    }
    i++;
  }
  if(j==4||j==7)
    cout<<"YES";
  else
    cout<<"NO";
  return 0;
}