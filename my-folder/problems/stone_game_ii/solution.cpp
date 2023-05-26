class Solution {
public:
    int stoneGameII(vector<int>& piles) {
        int n = piles.size();
        if(n == 0)  
            return 0;
        
        vector<int>sum(n+1, 0);
        
        for(int i=n-1; i>=0; i--){
           sum[i] = piles[i] + sum[i+1]; 
        }  
        
        vector<vector<int>>dp(n+1, vector<int>(n+1,0));
        for(int i = 0; i <= n; i++){
            dp[i][n] = sum[i];
        }    
        
        for(int i=n-1; i>=0; i--){
            for(int j=n-1; j>=0; j--){
                for(int x=1; x<=2*j && i+x<=n; x++)
                    dp[i][j] = max(dp[i][j], sum[i] - dp[i+x][max(j,x)]);
            }
        }
        return dp[0][1];
    }
};