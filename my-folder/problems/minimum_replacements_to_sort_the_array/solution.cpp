class Solution {
public:
    long long minimumReplacement(vector<int>& nums) {
        long long counter=0;
        double nxt=INT_MAX;
        for(int i =nums.size()-1;i>=0;i--)
        {
            if(nums[i] <= nxt)
            {
                nxt= nums[i];
                continue;
            }
            long long split_element = ceil(nums[i]/nxt);
            counter+=split_element-1;
            nxt=nums[i] / split_element;
        }
    return counter;
    }
};