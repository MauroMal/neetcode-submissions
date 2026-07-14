class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0;
        int r = 1;
        int res = 0;
        while (r < prices.size()){
            res = max(prices[r] - prices[l], res);
            if (prices[l] > prices[r]){
                l = r;
            } else {
                r++;
            }
        }
        return res;
    }
};
