class Solution{

	public:
	int minCoins(int coins[], int M, int V) 
	{ 
	    // Your code goes here
	    int mc[V+1];
	    mc[0]=0;
	    int cnt = 0;
	    for(int j=1;j<=V;j++){
	        mc[j]=5*V;
    	    for(int i=0;i<M;i++){
    	        if(coins[i]>j)
    	            continue;
    	        if(coins[i]==j){
    	            mc[j] = 1;
    	            break;
    	        }
    	        mc[j] = min(mc[j], 1+mc[j-coins[i]]);
    	    }
	    }
	    for(int i=0;i<=V;i++){
	        if(mc[i]==5*V)
	            mc[i]=-1;
	    }
	   // cout<<endl;
	    return mc[V];
	} 
	  
};