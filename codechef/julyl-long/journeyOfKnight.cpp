#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);

bool check(int x, int y){
    if (x > 0 && x <= 8 && y > 0 && y <= 8)
    {
        return true;
    }
    
    return false;
}

int bfs(int x1, int y1, int x2, int y2){
    queue<pair<int,int>> q;
    vector<vector<bool>> vis(9, vector<bool>(9, false));
    vector<vector<int>> temp = {{1,1,-1,-1,2,2,-2,-2},{2,-2,2,-2,1,-1,1,-1}};

    q.push({x1,y1});
    int n=1;
    // cout << "hELL" << endl;
    cout << q.front().first << " " << q.empty() << endl;
    int steps=0;
    while (!q.empty())
    {
        // cout << steps << endl;
        int x=0;
        pair<int,int> p;

        for (int i = 0; i < n; i++)
        {
            // check target
            int x=q.front().first, y=q.front().second;
            q.pop();
            vis[x][y] = true;
            if (x == x2 && y == y2)
            {
                return steps;
            }
            
            // next level
            for (int i = 0; i < 8; i++)
            {
                if (check(x+temp[0][i],y+temp[1][i]) && vis[x+temp[0][i]][y+temp[1][i]]==false)
                {
                    x++;
                    q.push({x+temp[0][i],y+temp[1][i]});
                }
            }
            
        }
        
        steps++;
        n = x;
    }

    return -1;
}

void solve(){
    //input
    int x1=8,y1=8,x2=7,y2=6;
    // cin >> x1 >> y1 >> x2 >> y2;

    cout << x1 << x2 << y1 << y2 << endl;
    //bfs
    int steps = bfs(x1,y1,x2,y2);
    cout << steps << endl;
    if ((100-steps)%2 == 1)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
    } 

    cout << "return " << x1 << y1 << endl;
    return;
}


int main(){
    FAST1;
    FAST2;
    ll t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}