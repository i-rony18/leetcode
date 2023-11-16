class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int length = nums.size();
        string number;
        for (int i = 0; i < length; i++) {
            number.push_back(nums[i][i] == '1' ? '0' : '1');
        }
        return number;
    }
};