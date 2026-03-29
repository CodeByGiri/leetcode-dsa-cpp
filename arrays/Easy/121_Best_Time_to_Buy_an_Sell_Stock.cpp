//121. Best Time to Buy an Sell Stock
// Time Complexity : O(n)
// One of the easiest problems. go through the vector, find the minPrice each step, and at the same time, reduce it from the price to see if it yields maxProfit

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = 0;

        for(int price : prices){
            minPrice = min(minPrice, price);
            maxProfit = max(maxProfit, price - minPrice);
        }

        return maxProfit;
    }
};