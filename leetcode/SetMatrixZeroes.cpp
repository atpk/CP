class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int i,j,n=matrix.size(),m=matrix[0].size(),r=0,c=0;
        //check if first column and row should be set to 0
        if(matrix[0][0]==0){
            r=1;
            c=1;
        }
        else{
            for(i=0;i<n;i++){
                if(matrix[i][0]==0)
                    c=1;
            }
            for(j=0;j<m;j++){
                if(matrix[0][j]==0)
                    r=1;
            }
        }
        //check for remaining elements and flag first row or column
        for(i=1;i<n;i++){
            for(j=1;j<m;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        //set rows and columns to 0
        for(i=1;i<n;i++){
            if(matrix[i][0]==0){
                for(j=0;j<m;j++){
                    matrix[i][j]=0;
                }
            }
        }
        for(j=1;j<m;j++){
            if(matrix[0][j]==0){
                for(i=0;i<n;i++){
                    matrix[i][j]=0;
                }
            }
        }
        //set first row and column to 0
        if(c){
            for(i=0;i<n;i++){
                matrix[i][0]=0;
            }
        }
        if(r){
            for(j=0;j<m;j++){
                matrix[0][j]=0;
            }
        }
    }
};