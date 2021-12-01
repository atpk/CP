#include <bits/stdc++.h>
using namespace std;

void check(int a, int b){
    if(a>b)
        cout<<">";
    else if(a<b)
        cout<<"<";
    else
        cout<<"=";
        
    return;
}

int dig(int a){
    int b=0;
    while(a>0){
        a=a/10;
        b++;
    }
    return b;
}

int modify(int a, int b){
    while(b--){
        a=a*10;
    }
    return a;
}

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int x1,x2,p1,p2;
        cin>>x1>>p1;
        cin>>x2>>p2;
        
        while(x1%10==0 && x1>0){
            x1=x1/10;
            p1++;
        }
        while(x2%10==0 && x2>0){
            x2=x2/10;
            p2++;
        }
        
        if(p1==p2){
            check(x1,x2);
        }
        else if(x1==x2){
            check(p1,p2);
        }
        else{
            int d1,d2;
            d1=dig(x1);
            d2=dig(x2);
            
            if(d1+p1 > d2+p2)
                cout<<">";
            else if(d1+p1 < d2+p2)
                cout<<"<";
            else{
                if(d1>d2){
                    x2=modify(x2,d1-d2);
                }
                else{
                    x1=modify(x1,d2-d1);
                }
                check(x1,x2);
            }
        }
        
        cout<<endl;
    }
    
    return 0;
}