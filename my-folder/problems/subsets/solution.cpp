class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int power=nums.size();
        int end=pow(2,power);
        end--;
        vector<vector<int>> res;
        for(int i=0;i<=end;i++){
            int num=i;
            vector<int> v;
            int cnt=0;
            while(num){
             if(num&1)v.push_back(nums[cnt]);
             cnt++;
             num=num>>1;
            }
            res.push_back(v);
        }
        return res;
    }
};