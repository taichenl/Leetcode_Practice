class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;
        int min = prices[0];
        for (int i = 1; i < prices.size(); ++i){
            max = std::max(max, prices[i] - min);
            min = std::min(min, prices[i]);
        }
        return max;
    }
};