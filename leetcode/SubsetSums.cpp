class Solution
{
public:
    vector<int> res;
    void subset(vector<int> arr, int l, int r, int sum){
        if(l>r){
            res.push_back(sum);
            return;
        }
        
        subset(arr, l+1, r, sum + arr[l]);
        subset(arr, l+1, r, sum);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        subset(arr, 0, N-1, 0);
        return res;
    }
};