//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    
    static bool comp(Item a, Item b){
        double t1 = double(a.value)/double(a.weight);
        double t2 = double(b.value)/double(b.weight);
        return t1>t2;
    }
    
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        sort(arr, arr+n, comp);
        
        // for(int i=0;i<n;i++){
        //     cout<<arr[i].value<<","<<arr[i].weight<<" ";
        // }
        int wt=0,j=0;
        double res = 0.0;
        while(j<n && wt+arr[j].weight<=W){
            wt+=arr[j].weight;
            res+=double(arr[j++].value);
        }
        if(j<n && wt<W){
            int r = W - wt;
            double t = double(arr[j].value)*double(r)/double(arr[j].weight);
            res+=t;
        }
        return res;
    }
        
};