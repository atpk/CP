#include <bits/stdc++.h>
using namespace std;

void step(int n, char src, char dest){
  cout<<"put plate "<<n<<" from "<<src<<" to "<<dest<<endl;
  return;
}

void toh(int n, char src, char dest, char helper){
  if(n==1){
    step(n,src,dest);
    return;
  }

  toh(n-1, src, helper, dest);
  step(n,src,dest);
  toh(n-1, helper, dest, src);
  return;
}

int main()
{
  int n;
  cin>>n;
  char s='S',h='H',d='D';
  toh(n,s,d,h);

	return 0;
}