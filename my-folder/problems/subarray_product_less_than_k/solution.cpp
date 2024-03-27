class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int result = 0;
        long long product = 1LL;
        for (int l = 0, r = 0; r < nums.size(); r++) {
            product *= nums[r];
            while ((l < r) && (product >= k)) product /= nums[l++];
            if (product < k) result += (r - l + 1);
        }
        return result;
    }
};