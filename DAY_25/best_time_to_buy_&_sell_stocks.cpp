class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxpro = 0;
        int mini = prices[0];
        for(int i =0; i< prices.size(); i++){
            int cost = prices[i] - mini;
            maxpro = max(maxpro , cost);
            mini = min(prices[i] , mini);
        }
        return maxpro;
    }
};