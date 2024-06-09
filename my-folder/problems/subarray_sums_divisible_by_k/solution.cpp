class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        
        vector<int> sums(k, 0); 
        sums[0]++;      
        int cnt = 0;
        int currSum = 0;
        for(int i = 0; i < nums.size(); i++) {
            currSum = (currSum + nums[i] % k + k) % k;  
            cnt += sums[currSum]; 
            sums[currSum]++;         
        }
        return cnt;
    }
};