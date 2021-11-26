    #include<bits/stdc++.h>  
    using namespace std;
      
    typedef long long ll;
    typedef unsigned int uint;
    typedef unsigned long long ull;
    typedef double db;
    typedef long double ld;
    typedef pair<int,int> PII;
    typedef pair<ll,int> Pli;
    typedef pair<ll,ll> Pll;
    typedef vector<int> VI;
    typedef vector<PII> VII;
    #define rep(i,a,b) for(int i=(int)a;i<=(int)b;i++)
    #define per(i,a,b) for(int i=(int)a;i>=(int)b;i--)
    #define REP(i,n) for(int i=0;i<n;++i)
    #define fi first
    #define se second
    #define mp make_pair
    #define pb push_back 
    #define MOD 1000*1000*1000+7
    vector<long> a[100010];
    bool visited[100010]={false};
    long long int c[100010];
    
    bool checkprime(ull n)
    {if(n<=1)
    return false;
    if(n==2)
    return true;
    int i=2;
    int flag=1;
    rep(i,2,n-1)
    {if((n%i)==0)
    {flag=0;
    break;}
    }
    if(flag)
    return true;
    else
    return false;
    }
     
     
     
    int main() {
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    int a=0;
    int b=0;
     
    int x;
    while(n--)
    {cin>>x;
    if(x==1)
    {a++;}
    else
    b++;}
     
    if(a%2)
    cout<<"NO"<<endl;
    else if((a==0)&&(b%2))
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
    }
    }