#include <bits/stdc++.h>
using namespace std;

void permutation(string input, string output){
  if(input.size()==0){
    cout<<output<<endl;
    return;
  }

  char ch=input[0];
  input.erase(0,1);
  output.push_back(ch);
  permutation(input, output);
  ch = toupper(ch);
  output[output.size()-1]=ch;
  permutation(input, output);
}

int main()
{
  string s,a;
  cin>>s;
  transform(s.begin(), s.end(), s.begin(), ::tolower);
  permutation(s,a);
	return 0;
}