#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        char s[n+1],a[n+1],b[n+1];
        scanf("%s",s);
        int i;
        if(s[0]=='1')
            a[0]='2';
        else
            a[0]='1';
        b[0]='1';
        for(i=1;i<n;i++){
            if(s[i]=='1'){
                if(a[i-1]=='2'){
                    a[i]='1';
                    b[i]='0';
                }
                else{
                    a[i]='2';
                    b[i]='1';
                }
            }
            else{
                if(a[i-1]=='1'){
                    a[i]='0';
                    b[i]='0';
                }
                else{
                    a[i]='1';
                    b[i]='1';
                }
            }
        }
        b[n]='\0';
        printf("%s\n",b);
    }
}