class Solution {
public:
    int kthGrammar(int n, int k) {
        if(n==1)
            return 0;
        
//         if(k%2 == 0) {
//             return !kthGrammar(n-1,k/2);
//         }
        
//         return kthGrammar(n-1, (k+1)/2);
        
        int mid=pow(2,n-2);
        if(k>mid){
            return !kthGrammar(n-1,k-mid);
        }
        
        return kthGrammar(n-1, k);
    }
};