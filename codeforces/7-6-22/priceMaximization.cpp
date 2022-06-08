#include <bits/stdc++.h>
#include <math.h>
 
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
 
    void solve (){
        long long int n,k,ans=0;
        cin>>n>>k;
        vector<long long>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            ans+=a[i]/k;
            a[i]=a[i]%k;
        }
        long long s=0,e=n-1;
        sort(a.begin(),a.end());
        while(s<e){
            if(a[s]+a[e]>=k){
                ans++;
                s++;
                e--;
            }
            else{
                s++;
            }
        }
        cout<<ans<<endl;
    }

    int main(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        cout<<fixed;
        cout<<setprecision(10);
//        freopen("timber_input.txt", "r", stdin);
//        freopen("timber_output.txt", "w", stdout);
        int t=1;
        cin>>t;
        for(int i=1;i<=t;i++){
//            cout<<"Case #"<<i<<": ";
            solve();
        }
        return 0;
    }