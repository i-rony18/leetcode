class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());

        for(int i=0; i<n-2; i++) {
            for(int j=i+1; j<n-1; j++) {
                int s = j + 1, e = n - 1;
                while(s <= e) {
                    int m = (s + e) / 2;
                    if(nums[m] == -(nums[i] + nums[j])) {
                        ans.push_back({nums[i], nums[j], nums[m]});
                        break;
                    }
                    nums[m] > -(nums[i] + nums[j]) ? e = m - 1 : s = m + 1;
                }
                while(j + 1< n && nums[j] == nums[j + 1]) j++;
            }
            while(i + 1 < n && nums[i] == nums[i + 1]) i++;
        }
        return ans;
    }
};