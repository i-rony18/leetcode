class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        vector<vector<int>> dp(n+1,vector<int>(2,0));

        for(int i=n-1 ; i>=0 ; i--) {
            for(int buy=0 ; buy<=1 ; buy++) {
                int pick = 0;
                int notPick = 0;
                if(buy) {
                    pick = -prices[i] + dp[i+1][0];
                    notPick = dp[i+1][1]; 
                }

                else {
                    pick = prices[i] - fee + dp[i+1][1];
                    notPick = dp[i+1][0];
                }
                dp[i][buy] = max(pick,notPick);
            }
        }
        return dp[0][1];
    }
};