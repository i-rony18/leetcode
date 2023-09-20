class Solution {
public:
    int minOperations(vector<int>& nums, int x)
    {
        int totsum=0;
        int s =0;int e =0;
        for(int i = 0 ;i<nums.size();i++)
        {
            totsum += nums[i];
        }
        if(totsum == x)
        return nums.size();
        totsum= totsum-x;
        int sum=0;
        int ans=0;
        while(e < nums.size())
        {
            sum += nums[e];
            while(s < e && sum >totsum)
            {
                sum -= nums[s++];
            }
            if(totsum == sum)
            {
                ans = max(ans,e-s+1);
            }
            e++;
        }  
        return ans == 0 ? -1: nums.size() - ans; 
    }
};