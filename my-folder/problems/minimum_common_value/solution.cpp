class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int small=-1;
        int j=0;
        int i=0;
        while(i<nums1.size()&&j<nums2.size())
        {
            if(nums1[i]==nums2[j]){small=nums1[i];return small;}
            else if(nums1[i]>nums2[j]){j++;}
            else if(nums1[i]<nums2[j]){i++;}
        }
        return small;
    }
};