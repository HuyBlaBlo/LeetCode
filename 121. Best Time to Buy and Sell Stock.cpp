class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() < 2) return 0;

        int min_val = prices[0];
        int min_index = 0;
        int profit_max = 0; 
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < min_val) {
                min_val = prices[i];
                min_index = i;
            }
            else {// lon hon
                int profit = prices[i] - min_val;
                profit_max = max(profit,profit_max);
            }
        }
        if(profit_max <= 0){
            return 0;
        }
        return profit_max;
    }
};
