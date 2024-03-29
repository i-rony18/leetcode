class Solution {
public:
    long countSubarrays(std::vector<int>& nums, int k) {
        int max_val = *max_element(nums.begin(), nums.end());
        long ans = 0;
        int l = 0;
        int c = 0;
        for (auto it : nums) {
            if (it == max_val)
                c++;
            while (c >= k) {
                if (nums[l] == max_val)
                    c--;
                l++;
            }
            ans += l;
        }
        return ans;
    }
};