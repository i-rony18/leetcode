class Solution {
public:
    
    vector<pair<int, int>>moves={{2, 1}, {1, 2}, {-1, 2}, {-2, 1}, {-1, -2}, {-2, -1}, {2, -1}, {1, -2}};
    double solve(int row, int col, int n, int k,  vector<vector<vector<double>>> &dp){
         if(row<0 || col<0 || row>=n || col>=n) return 0.0;
    if(k==0) {
     return 1.0;
    }
    if(dp[k][row][col]!=-1) return dp[k][row][col];
    double ans=0;
    for(auto it:moves){
        int nrow=row+it.first;
        int ncol=col+it.second;
        ans=ans+solve(nrow, ncol, n, k-1, dp);
    }
    return dp[k][row][col]=ans/8;
    }
    double knightProbability(int n, int k, int row, int column) {
        vector<vector<vector<double>>>dp(k+1, vector<vector<double>>(n, vector<double>(n, -1)));
        return solve(row, column, n, k, dp);
    }
};