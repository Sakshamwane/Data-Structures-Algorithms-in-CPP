class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //Track min prices seen so far
        int minPrice = INT_MAX;

        //Track max possible profit
        int maxProfit = INT_MIN;

        //Size of the given array
        int n = prices.size();

        //Traverse all prices
        for(int i = 0; i < n; i++){
            //Update min price
            if(prices[i] < minPrice) minPrice = prices[i];

            //Update max price
            maxProfit = max(maxProfit, prices[i] - minPrice);
        }
        //Return max profit
        return maxProfit;
    }
};