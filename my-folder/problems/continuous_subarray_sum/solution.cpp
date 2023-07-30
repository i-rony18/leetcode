class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_set<int> s;
        int cur_sum = 0,pre = 0,mod;
        for(int i = 0; i < n; i++)
        {
            cur_sum+=nums[i];
            mod = k; 
            if(k==0){
                mod=cur_sum;
            }
            else{
                mod=cur_sum%k;
            }
            //== 0? cur_sum : cur_sum%k;
            if(s.count(mod) > 0)
            {
                return true;
            }
            s.insert(pre);
            pre = mod;
        }
        return false;
    }
};