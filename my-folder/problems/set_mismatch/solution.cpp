class Solution {
public:
    std::vector<int> findErrorNums(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        std::vector<int> er(2, 0);
        int i = 0;

        while (i < nums.size()) {
            if (nums[i] == nums[i + 1]) {
                if (nums[i] == i + 1) {
                    er[0] = nums[i];
                    i += 1;
                    while (i < nums.size() && nums[i] == i) {
                        i += 1;
                    }
                    er[1] = i;
                    break;
                } else {
                    er[0] = nums[i];
                    while (i > -1 && nums[i] != i + 1) {
                        i -= 1;
                    }
                    if (i < 0) {
                        er[1] = 1;
                    } else {
                        er[1] = i + 2;
                    }
                    break;
                }
            }
            i += 1;
        }

        return er;
    }
};