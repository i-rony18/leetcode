class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int m=nums1.size(),n=nums2.size();
        int i=0,j=0;
        while(i<m && j<n){
            if(nums1[i]>nums2[j])
                j++;
            else if(nums1[i]<nums2[j])
                i++;
            else
                return nums1[i];
        }
        int a=nums1[0],b=nums2[0];
        if(a<b)
            return a*10+b;
        else if(a==b)
            return a;
        else
            return b*10+a;
    }
};