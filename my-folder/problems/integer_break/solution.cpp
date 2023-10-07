class Solution {
public:
    int sol(int n,vector<int>& dp){
        if(n<4)return n;
        if(dp[n]!=-1)return dp[n];
        int ans=0;
        for(int i=1;i<=n/2;i++){
            int a=i;
            a*=sol(n-i,dp);
            ans=max(ans,a);
        }
        return dp[n]=ans;
    }
    int integerBreak(int n) {
        vector<int> dp(n+1,-1);
        if(n<4)return n-1;
        return sol(n,dp);
    }
};