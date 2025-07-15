class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int n=prices.size();
       int maxprofit = 0;
       int sell = 0;
       int buy = prices[0]; // buying price should be min, so i will find least num
       for(int i=0; i<n; i++){

        if(prices[i]<buy){
        buy = prices[i];
       } 
       else if(prices[i]>buy){
        sell = prices[i];
        int profit = sell-buy;
       maxprofit = max(profit, maxprofit);
       }
       }
       return maxprofit;
    }
};