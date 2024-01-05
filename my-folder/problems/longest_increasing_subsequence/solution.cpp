class Solution {
public:
    
    int solver(vector<int> &n,int i,int pi,vector<vector<int>> &dp){
        if(i==n.size())return 0;
        if(dp[i][pi+1]!=-1)return dp[i][pi+1];
        int len=0;
        len=solver(n,i+1,pi,dp);
        if(pi==-1 || n[pi]<n[i]){
            len=max(len,1+solver(n,i+1,i,dp));
        }
        return dp[i][pi+1]=len;
    }
    
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> dp(n+1,vector<int> (n+2,-1));
        return solver(nums,0,-1,dp);    
    }
};