class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i,j,f=0;
        int n=matrix.size(),m=matrix[0].size();
        //check last element of each row
        for(i=0,j=m-1;i<n;i++){
            if(matrix[i][j]>=target){
                if(matrix[i][j]==target)
                    return true;
                else{
                    //check each element in the row
                    for(j=0;j<m-1;j++){
                        if(matrix[i][j]==target)
                            return true;
                    }
                }
                return false;
            }
        }
        return false;
    }
};