#include <bits/stdc++.h>
using namespace std;

vector<string> ans;

void bracket(int a, int b, string s){
  if(a==0){
    if(b==0){
      ans.push_back(s);
      return;
    }
    else{
      s.push_back(')');
      bracket(a, b-1, s);
      return;
    }
  }
  else if(a==b){
    s.push_back('(');
    bracket(a-1, b, s);
    return;
  }
  else{
    string ss = s;

    s.push_back('(');
    bracket(a-1, b, s);

    ss.push_back(')');
    bracket(a, b-1, ss);
  }
}

int main()
{
  int n;
  cin>>n;

  string s;
  bracket(n, n, s);

  cout<<ans.size()<<"_"<<endl;
  for(int i=0;i<ans.size();i++)cout<<ans[i]<<endl;

	return 0;
}