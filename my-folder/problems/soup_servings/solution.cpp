class Solution {
public:
    double soupServings(int n) {
        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
        vector<vector<double>> dp(200, vector<double>(200)); 
        function<double(int, int)> dfs = [&](int a, int b) -> double {
            if (a <= 0 and b <= 0) return 0.5;
            else if (a <= 0) return 1;
            else if (b <= 0) return 0;
            if (dp[a][b] > 0) return dp[a][b];
            dp[a][b] = 0.25 * (dfs(a-4, b) + dfs(a-3, b-1) + dfs(a-2, b-2) + dfs(a-1, b-3));
            return dp[a][b];
        };
        return n > 5e3 ? 1 : dfs((n + 24) / 25, (n + 24) / 25);
    }
};