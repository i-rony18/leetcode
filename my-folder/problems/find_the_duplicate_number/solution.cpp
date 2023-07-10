class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n= nums.size();
        vector<bool> occured(n);
        for(int i=0;i<n;i++){
            if(occured[nums[i]]){
                return nums[i];
            }
            else{
                occured[nums[i]]=true;
            }
        }
        return 0;
    }
};