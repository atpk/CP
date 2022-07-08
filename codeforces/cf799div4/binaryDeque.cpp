#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);

/*
void solve(){
    //input
    int n,s;
    cin>>n>>s;
    vector<int> a;
    int t,sum=0;
    for (int i = 0; i < n; i++)
    {
        cin>>t;
        sum+=t;
        a.push_back(t);
    }

    if (sum<s)
    {
        cout<<"-1"<<endl;
        return;
    }
//00101001001100
    int ans=0;
    while (sum>s)
    {
        n=a.size();
        
        
        // ans++;
        sum--;

        int i=0,j=n-1;
        while(a[i]==0)i++;
        while(a[j]==0)j--;
        // cout<<i<<" "<<n-1-j<<"   ";
        if (n-1-j < i)
        {
            while(j<n)
            {
                a.pop_back();
                ans++;
                j++;
            }
        }
        else
        {
            i++;
            while (i--)
            {
                vector<int>::iterator it;
                it = a.begin();
                a.erase(it);
                ans++;
            }
            
        }
        // for (int i = 0; i < a.size(); i++)
        // {
        //     cout<<a[i]<<" ";
        // }
        // cout<<ans;
        // cout<<endl;
        
    }

    cout<<ans<<endl;
    
    return;
}
*/

void solve()
{
	int n, s;
	cin >> n >> s;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	vector<int> ones(n + 1, 0);
	for (int i = 1; i <= n; i++)
	{
		ones[i] = ones[i - 1] + (a[i - 1] == 1);
	}
	if (ones[n] < s)
	{
		cout << -1 << endl;
		return;
	}
	int ans = n;
	for (int i = 0; i <= n; i++)
	{
		int pos = upper_bound(ones.begin(), ones.end(), s + ones[i]) - ones.begin();
        cout<<pos<<endl;
		pos--;
		if (ones[pos] == (s + ones[i]))
		{
			int tmp = (n - pos) + i;
			ans = min(tmp, ans);
		}
	}
	cout << ans << endl;
}


int main(){
    FAST1;
    FAST2;
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
}