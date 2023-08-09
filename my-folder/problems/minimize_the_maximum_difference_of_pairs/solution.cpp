class Solution {
public:
    int check(vector<int>&nums,int m,int p)
    {
        int i=0;
        while(i<nums.size()-1)
        {
            if(abs(nums[i]-nums[i+1])<=m)
            {
                p--;
                i=i+2;
            }
            else
            i++;
        }
        return p<=0?1:0;
    }
    int minimizeMax(vector<int>& nums, int p) {
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums[nums.size()-1];
        int ans=0;
        while(i<=j)
        {
            int m=(i+j)>>1;
            if(check(nums,m,p))
            {
                ans=m;
                j=m-1;
            }
            else
            {
                i=m+1;
            }
        }
        return ans;
    }
};