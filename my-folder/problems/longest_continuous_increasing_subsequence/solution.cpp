class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int count=1;
				int n=nums.size();
				int ans=1;
				for (int i=1;i<n;i++){
					if(nums[i]>nums[i-1]){
						count++;
						ans=max(ans,count);
					}
					else{
						count=1;
					}
				}
				return ans;
    }
};