class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> ans;
        int n=nums.size()/3 + 1;
        int count=0;
        int element= nums[0];
         for(int i=0;i<nums.size();i++){
            if(element == nums[i])
                count++;
            else{
                if(count >= n)
                    ans.push_back(element);
                element = nums[i];
                count = 1;
            }
        }
        if(count >= n)
            ans.push_back(element);
        return ans;
    }
};