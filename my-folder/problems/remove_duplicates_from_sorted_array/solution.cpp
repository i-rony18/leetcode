class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> v;
        int n=nums.size();
        v.push_back(nums[0]);
        int j=1;
        for (int i=1;i<n;i++)
             {
                 
                if (nums[i]!=nums[j-1]){
                    v.push_back(j-1);
                    nums[j]=nums[i];
                    
                    j++;
                }
             }
        return v.size();
    }
};