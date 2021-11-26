#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s;
    int n1=0,n2=0,n3=0,i,j;
    cin>>s;
    for(i=0;i<s.length();i++){
        if(s[i]=='1')
            n1++;
        if(s[i]=='2')
            n2++;
        if(s[i]=='3')
            n3++;
    }
    std::vector<int> n;
    while(n1--)
        n.push_back(1);
    while(n2--)
        n.push_back(2);
    while(n3--)
        n.push_back(3);
    for(i=0;i<size(n)-1;i++)
        cout<<n[i]<<"+";
    cout<<n[i];
    return 0;
}