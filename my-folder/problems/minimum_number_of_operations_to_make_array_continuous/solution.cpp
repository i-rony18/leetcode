class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        sort(begin(nums),end(nums));
        nums.erase(unique(begin(nums),end(nums)), end(nums));
       int ans= n;
       for(int i=0;i<nums.size();i++)
       {
           int low = nums[i]; 
           int high = nums[i]+n-1; 
           auto it = upper_bound(nums.begin(),nums.end(),high);
           int lastPos = it-nums.begin();
           int len = lastPos - i; 
           ans = min(ans,n-len);

       }
       return ans;
    }
};
