#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);

bool isPalindrome(string S)
{
    // Iterate over the range [0, N/2]
    for (int i = 0; i < S.length() / 2; i++) {
 
        // If S[i] is not equal to
        // the S[N-i-1]
        if (S[i] != S[S.length() - i - 1]) {
            // Return No
            return false;
        }
    }
    // Return "Yes"
    return true;
}

void solve(){
    //input
    int a;
    string s;
    cin>>s>>a;
    
    // get hh and mm
    string s1,s2;
    s1.push_back(s[0]);
    s1.push_back(s[1]);
    s2.push_back(s[3]);
    s2.push_back(s[4]);
    int h,m;
    stringstream ss1,ss2;
    ss1<<s1;
    ss1>>h;
    ss2<<s2;
    ss2>>m;

    map<string,int> mp;
    int ans=0;
    while (true)
    {
        m+=a;
        h+=(m/60);
        h%=24;
        m%=60;
        stringstream ss;
        if(h<10)ss<<"0";
        ss<<h;
        ss<<":";
        if(m<10)ss<<"0";
        ss<<m;
        ss>>s;
        
        if  (mp.find(s)==mp.end())
        {
            mp[s] = 1;
            if(isPalindrome(s))ans++;
        }
        else   
            break;
    }
    
    cout<<ans<<endl;

    return;
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