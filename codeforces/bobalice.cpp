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
     
     
     
    //__builtin_clz(x): the number of zeros at the beginning of the bit representation
     
    //__builtin_ctz(x): the number of zeros at the end of the bit representation
     //__builtin_popcount(x): the number of ones in the bit representation
    //__builtin_parity(x): the parity (even or odd) of the number of ones in the bit representation
     
    //the following code creates a vector that contains the
    //unique elements of the original vector in a sorted order
    /*sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());*/
     
     
     
    /*
    int maxSubArraySum(int a[], int size) 
    { 
        int max_so_far = INT_MIN, max_ending_here = 0; 
      
        for (int i = 0; i < size; i++) 
        { 
            max_ending_here = max_ending_here + a[i]; 
            if (max_so_far < max_ending_here) 
                max_so_far = max_ending_here; 
      
            if (max_ending_here < 0) 
                max_ending_here = 0; 
        } 
        return max_so_far; 
    } */
     
     
     
     
    /*void dfs(long x, ll &cst)
    {
    	visited[x]=1;
    	cst=min(cst, c[x]);
    	for(long i=0; i<a[x].size(); i++)
    	{
    		if(!visited[a[x][i]])
    		dfs(a[x][i], cst);
    	}
    } */
     
    ll gcd (ll a, ll b) {
        if (b == 0)
            return a;
        else
            return gcd (b, a % b);
    }
     
    /* ll bin_pow(ll x, ll e) {
    	if (e == 0) {
    		return 1;
    	}
    	if (e == 1) {
    		return x;
    	}
    	ll y = bin_pow(x, e / 2);
    	y = y * y;
    	if (e % 2 == 0) {
    		return y;
    	}
    	else {
    		return y * x;
    	}
    } */
     
     
    //the following code creates a vector that contains the
    //unique elements of the original vector in a sorted order
    /*sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());*/
     
     
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
    long int n;
    cin>>n;
    vector<long long> vec;
    long long x;
    while(n--)
    {cin>>x;
    vec.pb(x);}
     
    sort(vec.begin(),vec.end());
    reverse(vec.begin(),vec.end());
    long long int sum_even=0,sum_odd=0;
     
    REP(i,vec.size())
    {if(((i%2)==0)&&((vec[i]%2)==0))
    sum_even=sum_even+vec[i];
    else if((i%2)&&((vec[i]%2)))
    sum_odd=sum_odd+vec[i];
    }
    if(sum_even>sum_odd)
    cout<<"Alice"<<endl;
    else if(sum_even==sum_odd)
    cout<<"Tie"<<endl;
    else
    cout<<"Bob"<<endl;
     
    }
    }