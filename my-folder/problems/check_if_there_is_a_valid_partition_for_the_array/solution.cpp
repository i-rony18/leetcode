class Solution {
public:
    bool validPartition(vector<int>& nums) {
        int n = nums.size();
        int dis3=1; 
        int dis2=0;
        int dis1=0;
        if(nums[1] == nums[0]) dis1=1;
        for(int i=2;i<n;i++){
            int dis0=0;
            if(nums[i] == nums[i-1] && dis2==1) 
                dis0 = 1;
            if(i>1 && nums[i-1] == nums[i-2] && nums[i] == nums[i-1] && dis3==1)
                dis0 = 1;
            if(i>1 && nums[i-1]-nums[i-2]==1 && nums[i]-nums[i-1]==1 && dis3==1)
                dis0 = 1;
            dis3 = dis2;
            dis2 = dis1;
            dis1 = dis0;
        }

        return dis1;
    }
};