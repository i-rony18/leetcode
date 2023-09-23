class Solution {
  private:
  bool compare(string &s1 , string &s2){
    if(s1.size() != s2.size()+1) return false;
    int i(0) , j(0);
    while(i<s1.size()){
      if(j<s2.size() and s1[i] == s2[j]){
        i++;
        j++;
      }
      else i++;
    }
    if(i == s1.size() and j == s2.size()) return true;
    return false;

  }
public:
 static bool cmp(string&s1 , string&s2){
    return s1.size()<s2.size();
  }
    int longestStrChain(vector<string>& nums) {
        sort(nums.begin() , nums.end(),cmp);
        int n = nums.size();
        vector<int>dp(n, 1) ;
        int maxi = 1;
        for(int i = 0; i<n; i++){
         
            for(int j = 0; j<i; j++){
                if(compare(nums[i]  , nums[j])  && 1 + dp[j] > dp[i]){
                    dp[i] = 1+ dp[j];
                }
            }
            if(dp[i] >= maxi) {
                maxi = dp[i];
            }
        }
        return maxi;
    }
};