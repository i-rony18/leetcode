class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(), prices.end());
        int sum= prices[0] + prices[1];
        int ans= money-sum;
        if(ans<0){
            return money;
        }
        else{
            return ans;
        
        }
    }
};