class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=INT_MAX,pro=0,i,j,n=prices.size();
        //buy is lowest price till today
        for(auto &it : prices){
            if(it-buy>pro){
                pro=it-buy;
            }
            if(it<buy){
                buy=it;
            }
        }
        return pro;
    }
};