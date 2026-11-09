class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int buy = prices[0];
        int sell = 0;
        int profit = 0;
        for(int i=0;i<n-1;i++){
            buy = prices[i];
            sell = prices[i+1];
            if(buy < sell){
                profit += sell-buy;
            }
        }
        return profit;
    }
};