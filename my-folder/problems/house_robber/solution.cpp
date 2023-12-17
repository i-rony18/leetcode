class Solution {
public:
    int helper(vector<int>&nums, int i, vector<int>&dp, int n){
        //base
        if(i>=n){
            return 0;
        }
        //lookup
        if(dp[i]!=-1){
            return dp[i];
        }
        //recurive or dp
        int rob= nums[i] + helper(nums, i+2, dp ,n);
        int notrob= helper(nums, i+1, dp ,n);
        return dp[i]=max(rob, notrob);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1,-1);
        return helper(nums, 0 , dp ,n);
        
    }
};