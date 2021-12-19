// int search(int N, int M, int matrix[][M], int x, int i, int j){
//     if(i>=N || j<0)
//         return 0;
        
//     if(matrix[i][j]==x)
//         return 1;
        
//     if(matrix[i][j]>x)
//         return search(N, M, matrix, x, i, j-1);
//     else
//         return search(N, M, matrix, x, i+1, j);
    
// }

int matSearch (int N, int M, int matrix[][M], int x)
{
    int i=0,j=M-1;
    while(j>=0 && i<N){
        if(matrix[i][j]==x)
            return 1;
        
        if(matrix[i][j]>x)
            j--;
        else
            i++;
    }
    
    // return search(N, M, matrix, x, i, j);
    return 0;
}