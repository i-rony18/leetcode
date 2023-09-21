class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(), n = nums2.size();
        if (m > n)
            return findMedianSortedArrays(nums2, nums1);
        int ll = 0, ul = m, tot = m + n, half = (tot + 1) / 2;
        while(ll <= ul){
            int mid1 = (ll + ul) >> 1;
            int mid2 = half - mid1;
            int x1 = INT_MIN, x2 = INT_MIN, y1 = INT_MAX, y2 = INT_MAX;
            if(mid1 != 0)
                x1 = nums1[mid1 - 1];
            if(mid2 != 0)
                x2 = nums2[mid2 - 1];
            if(mid1 != m)
                y1 = nums1[mid1];
            if(mid2 != n)
                y2 = nums2[mid2];

            if(x1 <= y2 && x2 <= y1){
                if(tot & 1)
                    return max(x1, x2);
                else
                    return (max(x1, x2) + min(y1, y2)) / 2.0;
            }
            if(x1 > y2)
                ul = mid1 - 1;
            else
                ll = mid1 + 1;
        }
        return 0;
    }
};