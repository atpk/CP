class Solution {
public:
    vector<vector<string>> ans;
    
    vector<string> change(vector<string> t, int p, int q, int n){
        char c = '#';
        for(int i=0;i<n;i++)
            t[i][q]=c;
        
        for(int i=0;i<n;i++)
            t[p][i]=c;
        
        int i=p-1,j=q-1;
        while(i>=0 && j>=0){
            t[i--][j--]=c;
        }
        i=p+1;
        j=q+1;
        while(i<n && j<n){
            t[i++][j++]=c;
        }
        i=p-1;
        j=q+1;
        while(i>=0 && j<n){
            t[i--][j++]=c;
        }
        i=p+1;
        j=q-1;
        while(i<n && j>=0){
            t[i++][j--]=c;
        }
        
        t[p][q]='Q';
        return t;
    }

    void place(vector<string> t, int left, int n){
        if(left==0){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(t[i][j]=='#')
                        t[i][j]='.';
                }
            }
            ans.push_back(t);
            return;
        }
        
        int i=n-left;
        // for(int i=0;i<n;i++){
        //     cout<<t[i]<<endl;
        // }
        // cout<<"_________"<<endl;
        for(int j=0;j<n;j++){
            if(t[i][j]=='.'){
                // cout<<i<<" "<<j<<endl;
                vector<string> temp=change(t, i, j, n);
                
                place(temp, left-1, n);
            }
        }
        
        return;
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<string> t;
        
        string s(n,'.');
        for(int i=0;i<n;i++){
            t.push_back(s);
        }
        
        place(t, n, n);
        
        return ans;
    }
};
