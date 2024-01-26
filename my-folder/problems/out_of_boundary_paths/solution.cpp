class Solution {
public:
    int maxi=1e9+7;
    vector<vector<vector<int>>> dp;
    int solve(int n, int m, int maxMove, int startRow, int startColumn) {
        if(startColumn<0 || startColumn>=n || startRow<0 || startRow>=m){
            return 1;
        }
        if(maxMove == 0) return 0;
        if(dp[startRow][startColumn][maxMove] != -1) return dp[startRow][startColumn][maxMove];

        int up=0, down=0,left=0,right=0;
        if(maxMove>0){
            up=solve(n , m , maxMove-1, startRow-1, startColumn);
        }
        if(maxMove>0){
            down=solve(n , m , maxMove-1, startRow+1, startColumn);
        }
        if(maxMove>0){
            left=solve(n , m , maxMove-1, startRow, startColumn-1);
        }
        if(maxMove>0){
            right=solve(n , m , maxMove-1, startRow, startColumn+1);
        }
        return dp[startRow][startColumn][maxMove] = ((up+down)%maxi + (left+right)%maxi)%maxi;
    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        dp = vector<vector<vector<int>>>(m, vector<vector<int>>(n, vector<int>(maxMove+1, -1)));
        return solve(n, m, maxMove, startRow, startColumn);
    }
};
