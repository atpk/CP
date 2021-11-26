#include <iostream>
#include <cstring>
using namespace std;
int main() {
  int n,i,rm=0;
  cin>>n;
  string word;
  cin>>word;
  for(i=1;i<n;i++){
    if(word[i]==word[i-1])
      rm++;
  }
  cout<<rm;
  return 0;
}