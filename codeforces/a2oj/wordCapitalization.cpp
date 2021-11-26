#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main() {
  string word;
  cin>>word;
  putchar(toupper(word[0]));
  int i=1;
  while(word[i]!='\0'){
    putchar(word[i]);
     i++;
  }
  return 0;
}