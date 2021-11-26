#include <iostream>
#include <cstring>
int isPrime(int n)
{ 
  if (n <= 1) 
      return 0;   
  for (int i = 2; i <= n/2; i++) 
    if (n % i == 0)
      return 0; 
  
  return 1; 
}
int nextPrime(int n)
{
  n++;
  while(!isPrime(n))
    n++;
  return n;
}
using namespace std;
int main() {
  int n,m;
  cin>>n>>m;
  if(nextPrime(n)==m)
    cout<<"YES";
  else
    cout<<"NO";
  return 0;
}