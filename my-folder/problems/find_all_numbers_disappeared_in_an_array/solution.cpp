class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums)
    {
        int n=nums.size(); 
        unordered_map<int,int>mp;
        vector<int>ans;   
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        for(int j=1;j<=n;j++)
        {
            if(mp[j]==0)
                ans.push_back(j);
        }
        return ans;
    }
};