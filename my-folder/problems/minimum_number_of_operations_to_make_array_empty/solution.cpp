class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int> freq;
        int n=nums.size();
        for(auto it: nums){
            freq[it]++;
        }
        int ans=0;
        for(auto [_,cnt]:freq){
            if(cnt==1){
                return -1;
            }
            ans+=(cnt+2)/3;
        }
        return ans;
    }
};