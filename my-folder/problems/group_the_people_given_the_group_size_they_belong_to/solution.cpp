class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        int i,n=groupSizes.size();
        vector<vector<int>> ans;
        vector<int> v[n+1];
        for(i=0;i<n;i++)
        {
            v[groupSizes[i]].push_back(i);
            if (v[groupSizes[i]].size()==groupSizes[i])
            {
                ans.push_back(v[groupSizes[i]]);
                v[groupSizes[i]].clear();
            }
        }
        return ans;
    }
};