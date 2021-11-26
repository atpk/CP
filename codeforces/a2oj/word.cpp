#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main() {
  string word;
  cin>>word;
  int l=0,u=0,i=0;
  while(word[i]!='\0'){
    if(word[i]>96 && word[i]<123)
      l++;
    else
      u++;
    i++;
  }
  if(l<u){
    i=0;
    while(word[i]!='\0'){
        putchar(toupper(word[i]));
        i++;
    }
  }
  else{
    i=0;
    while(word[i]!='\0'){
      putchar(tolower(word[i]));
      i++;
    }
  }
  return 0;
}