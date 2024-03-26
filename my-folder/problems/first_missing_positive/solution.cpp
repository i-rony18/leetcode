class Solution {
public:
    int firstMissingPositive(vector<int>& nums) 
    {
        unordered_map<int, int>freq;
        for(auto it:nums) freq[it]++;
        int n = 1e5+5;
        for(int i=1;i<n;i++)
        {
            if(freq[i]==0) return i;
        }
        return 0;
    }
};