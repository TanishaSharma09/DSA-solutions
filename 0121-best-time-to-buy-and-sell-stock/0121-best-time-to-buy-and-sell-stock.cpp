class Solution {
public:
int maxprofit=0;

    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
      int best_buy=prices[0];
    for(int i=1;i<prices.size();i++){
        if (prices[i]>best_buy){
            maxprofit=max(maxprofit,prices[i]-best_buy);
        }
        best_buy=min (best_buy,prices[i]); 
    }        
    return maxprofit;
    };
};