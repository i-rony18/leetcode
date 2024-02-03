class Solution {
private:
    int dp[500];
    int f(int idx,vector<int> &arr,int k) {
        //base cases
        if(idx == arr.size()) return 0;
        if(dp[idx]!=-1) return dp[idx];
        //dp cases
        int ans=0,maxi=0;
        int lim=min(idx+k,int(arr.size()));
        for(int i=idx;i<lim;++i) {
            maxi=max(maxi,arr[i]);
            ans=max(ans, maxi*(i-idx+1) + f(i+1,arr,k));
        }
        return dp[idx]=ans;
    }
public:
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        memset(dp,-1,sizeof(dp));
        return f(0,arr,k);
    }
};