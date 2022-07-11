#include<bits/stdc++.h>
using namespace std;

class solution
{
public:
    string encode(vector<string> list) {
        string msg="";
        for (auto s: list)
        {
            msg += to_string(s.size()) + "#" + s;
        }
        return msg;
    }

    vector<string> decode(string msg) {
        vector<string> list;
        int i=0,n=msg.size();
        while (i<n)
        {
            int j=i;
            while(msg[j]!='#')  
                j++;
            int len = stoi(msg.substr(i,j-i));
            // cout << len << " ";
            list.push_back(msg.substr(j+1,len));
            i=j+1+len;
        }
        // cout << endl;
        // print to check
        // for (auto b: list)
        // {
        //     cout << b << " ";
        // }
        // cout << endl;
        return list;
    }
};

int main() {
    solution a;
    vector<string> s = {"hell","#eojf","3sdfj"};
    string x = a.encode(s);
    cout << x << endl;
    s.clear();
    s = a.decode(x);
    return 0;
}