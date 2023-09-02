class Solution {
public:
    int minExtraChar(string s, vector<string>& dictionary) {
        int n = s.size();
        vector<int> dp(n+1, n); 
        dp[n]=0;
        for (int i=n-1; i >= 0; i--) {
            for (string& w : dictionary) {
                int wLen = w.size();
                if (i+wLen<=n && s.substr(i, wLen) == w) {
                    dp[i] = min(dp[i], dp[i+wLen]);
                }
            }
            dp[i] = min(dp[i], dp[i+1]+1); 
        }
        return dp[0];
    }
};