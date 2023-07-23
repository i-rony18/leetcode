class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> table(1001, 0);
        for (int i = 0; i < nums1.size(); i++) {
            table[nums1[i]]++;
        }
        vector<int> result;
        for (int i = 0; i < nums2.size(); i++) {
            if (table[nums2[i]] != 0) {
                result.push_back(nums2[i]);
                table[nums2[i]]--;
            }
        }
        return result;
    }
};